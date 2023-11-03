cmake_minimum_required(VERSION 3.26)
project(cf)

set(CMAKE_CXX_STANDARD 17)

add_executable(cf cf/contests/cf907-div2/a/main.cpp
        cf/contests/cf907-div2/b/main.cpp
        cf/archive/1879b/main.cpp
        noi/1/2022/oil.cpp
        noi/1/2022/sequence.cpp
        noi/1/2021/tiling.cpp
        template.cpp
        cf/contests/ecf157/a/main.cpp
        cf/contests/ecf157/b/main.cpp
        cf/contests/ecf157/c/main.cpp
        cf/contests/ecf157/d/main.cpp
        cf/contests/ecf157/e/main.cpp
        cf/contests/ecf157/f/main.cpp
        cf/contests/ecf157/g/main.cpp)
