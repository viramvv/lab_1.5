cmake_minimum_required(VERSION 3.20)
project(Lab1_5_Testing)

set(CMAKE_CXX_STANDARD 17)

# Підключаємо FetchContent для завантаження GTest
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# For Windows: запобігає конфліктам з бібліотеками
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Створюємо бібліотеку з твоїх класів, щоб тести могли їх бачити
add_library(LabLogic Number.cpp Real.cpp)

# Основна програма
add_executable(Lab1_5 main.cpp)
target_link_libraries(Lab1_5 LabLogic)

# Створюємо виконуваний файл для тестів
add_executable(UnitTest UnitTest.cpp)
target_link_libraries(UnitTest LabLogic gtest_main)

# Додаємо підтримку тестів у IDE
include(GoogleTest)
gtest_discover_tests(UnitTest)