cmake_minimum_required(VERSION 3.28)
project(cpp_modules CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_library(lib)
target_sources(lib
  PUBLIC
    FILE_SET CXX_MODULES
      FILES
        src/lib.cxx
)

add_executable(main src/main.cxx)
target_link_libraries(main lib)
