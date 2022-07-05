cmake_minimum_required(VERSION 3.13)

#project name
PROJECT(CTest)

enable_language(ASM)

set(C_STANDARD 11)

#head file path
#INCLUDE_DIRECTORIES(include)

#add executable file
ADD_EXECUTABLE(CTest main.c hello.S)

#add link library
target_link_libraries(${PROJECT_NAME} -ldl)


