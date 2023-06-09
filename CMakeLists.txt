cmake_minimum_required(VERSION 3.14)

project(fabric-metadata LANGUAGES C CXX)

set(fabric_metadata_MAIN_PROJECT OFF)
if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(fabric_metadata_MAIN_PROJECT ON)
endif()

# include code generation and file fetch
# user of this project can skip these steps
if(fabric_metadata_MAIN_PROJECT)
  include(cmake/fetch_get_files.cmake)
  include(cmake/fetch_get_internal_files.cmake)
  # fabric headers are utf16 and clang fmt cannot format them.
  #include(cmake/clang-format.cmake)
endif()

# common lib dir
if(NOT ServiceFabric_Runtime_ROOT)
    set(ServiceFabric_Runtime_ROOT "C:\\Program Files\\Microsoft Service Fabric")
endif()

set(ServiceFabric_Runtime_BINARY_DIR "${ServiceFabric_Runtime_ROOT}\\bin\\Fabric\\Fabric.Code")

include(cmake/ImportFabric.cmake)
add_subdirectory(src)

if(fabric_metadata_MAIN_PROJECT)
  # generate winmd. defer generation task in .metadata csproj.
  find_program (
      dotnet_exe
      NAMES dotnet.exe
      REQUIRED
  )
  set(_out_winmds
    ServiceFabric.winmd
    Windows.Win32.Interop.winmd
    Windows.Win32.winmd
  )
  set(_out_winmd_paths "")
  foreach(_out_winmd ${_out_winmds})
  list(APPEND _out_winmd_paths ${CMAKE_CURRENT_SOURCE_DIR}/.windows/winmd/${_out_winmd})
  endforeach()

  add_custom_command(
    OUTPUT ${_out_winmd_paths}
    COMMAND ${dotnet_exe} build
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/.metadata
    VERBATIM
  )

  # force generate
  add_custom_target(generate_winmd
    DEPENDS ${_out_winmd_paths}
  )

  # generate cpp
  add_custom_target(generate_fabric_all
    DEPENDS
    generate_winmd
    generate_cpp_headers
    generate_internal_cpp_headers
    copy_fabric_internal_uuid_files
    copy_fabric_uuid_files
    # generate all support libs
    FabricRuntime
    FabricClient
    FabricResources
    FabricServiceCommunication
    FabricTransport
  )

  # clean all generated code
  add_custom_target(force_clean
    COMMAND ${CMAKE_COMMAND} -E rm -rf .metadata/Obj .metadata/bin .windows src/fabric/include src/fabric/src
    src/fabric_internal/include src/fabric_internal/src
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )
endif()