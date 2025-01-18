cmake_minimum_required(VERSION 3.10)
project(CppJsonExperience)

set(CMAKE_CXX_STANDARD 17)

# Add vcpkg toolchain file
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")
# set(CMAKE_TOOLCHAIN_FILE "/home/swedish/vcpkg/scripts/buildsystems/vcpkg")

add_executable(CppJsonExperience main.cpp)

# Link the nlohmann_json library
# find_package(nlohmann_json CONFIG REQUIRED)
# target_link_libraries(CppJsonExperience PRIVATE nlohmann_json::nlohmann_json)
# find_package(nlohmann_json CONFIG REQUIRED)
# target_link_libraries(CppJsonExperience PRIVATE nlohmann_json::nlohmann_json)