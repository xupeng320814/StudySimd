cmake_minimum_required(VERSION 3.5)
project(StudySimd)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(sse_example src/square.cpp)

# 显式指定 SSE 支持
if (MSVC)
    # Visual Studio 通常自动支持 SSE2，无需特别设置
else()
    # 对于 GCC/Clang，可以如下添加 SSE 支持（SSE1，通常也支持 _mm_* 指令）
    target_compile_options(sse_example PRIVATE -msse)
    # 你也可以添加更高指令集：-msse2 -msse3 -mavx 等，视需求而定
endif()