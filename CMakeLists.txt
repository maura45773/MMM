cmake_minimum_required(VERSION 3.20)

project(test)

set(SRC Main.cpp)

add_executable(${PROJECT_NAME} ${SRC})

find_package(Drogon REQUIRED)

target_link_libraries(${PROJECT_NAME} Drogon::Drogon)