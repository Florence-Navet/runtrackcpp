cmake_minimum_required(VERSION 3.10.0)

project(Dyma VERSION 0.1.0 LANGUAGES C CXX)

# include(CTest)
# enable_testing()

add_executable(Dyma src/main.cpp src/auto.cpp)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)