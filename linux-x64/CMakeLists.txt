cmake_minimum_required(VERSION 3.20)
project(arqanore-template VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 23)

add_executable(app src/main.cpp)
target_include_directories(app PUBLIC include)
target_link_directories(app PUBLIC lib)
target_link_libraries(app arqanore)