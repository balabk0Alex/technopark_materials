cmake_minimum_required(VERSION 3.0)

project(generatesignal)

add_executable(generatesignal main.cpp)

install(TARGETS generatesignal RUNTIME DESTINATION bin)
