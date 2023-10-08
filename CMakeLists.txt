cmake_minimum_required(VERSION 3.26)
project(C C)

set(CMAKE_C_STANDARD 99)

#add_executable(main main.c)
#add_executable(second add.c)

# 遍历项目根目录和子目录下所有的 .cpp 文件
file (GLOB files *.c )
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)/(.+)\\..*" "\\1-\\2" exe ${file})
    add_executable (${exe} ${file} )
endforeach ()
#add_executable(untitled main.cpp lesson_1_helloWorld.cpp lesson_2.cpp)