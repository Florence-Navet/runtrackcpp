cmake_minimum_required(VERSION 3.10)

project(TODO VERSION 0.1.0 LANGUAGES CXX)

# Active le standard C++ 17
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Si tous tes fichiers sont dans un dossier src/
include_directories(src)

# Exécutable
add_executable(TODO

    src/task_manager.cpp
    src/main.cpp
)



# Optionnel : packaging
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
