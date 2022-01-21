cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(aZIAtique)

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(aZIAtique SHARED
    include/Abstract/AModule.hpp
    include/Impl/Common.hpp
    include/Impl/Context.hpp
    include/Impl/Ip4.hpp
    include/Impl/Request.hpp
    include/Impl/Respond.hpp
    include/Interface/IQueue.hpp
    include/Interface/ISocket.hpp
    include/API.hpp
    src/AModule.cpp
    src/Ip4.cpp
    src/Request.cpp
    src/Respond.cpp
)