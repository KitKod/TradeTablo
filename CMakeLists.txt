cmake_minimum_required(VERSION 3.17)
project(TradeTablo)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/whoshuu/cpr.git GIT_TAG 5e87cb5f45ac99858f0286dc1c35a6cd27c3bcb9) # the commit hash for 1.5.0
FetchContent_MakeAvailable(cpr)

add_executable(TradeTablo src/main.cpp)
target_link_libraries(TradeTablo PRIVATE cpr::cpr)
