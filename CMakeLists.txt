cmake_minimum_required(VERSION 3.25)

<<<<<<< HEAD
project(TrilogySDK VERSION 0.1.3)
=======
project(TrilogySDK VERSION 0.1.5)
>>>>>>> 14567c30f5e2ac7ca95db1befabffb33380e3915

add_library(TrilogySDK)

add_subdirectory(include)
add_subdirectory(src)

get_target_property(SOURCES TrilogySDK SOURCES)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${SOURCES})

target_compile_features(TrilogySDK PRIVATE cxx_std_17)
target_include_directories(TrilogySDK
  PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)