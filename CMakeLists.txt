# 设置 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.20)

# 设置项目名称和使用的编程语言
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# 设置构建产物输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)      # 可执行文件
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)     # 动态库
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)     # 静态库

# 确保每个配置（Debug/Release）的输出目录一致
foreach(OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES})
    string(TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_BINARY_DIR}/bin)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_BINARY_DIR}/lib)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_BINARY_DIR}/lib)
endforeach()

# 1. 替代 `c_cpp_properties.json` 和 `tasks.json` 中的编译器设置
# 设置 C++ 标准为 20，并要求编译器支持
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. 替代 `tasks.json` 和 `settings.json` 中的警告标志
# 这些标志与您的 C_Cpp_Runner.warnings 和 tasks.json 中的 args 高度一致
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    # 通用 Clang/GCC 警告设置
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference")
    
    # 调试模式下的标志 (-g -O0)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")
    
    # 如果您希望将警告视为错误（对应 C_Cpp_Runner.warningsAsError）
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
endif()

# 3. 替代 `c_cpp_properties.json` 中的 includePath
# 将整个工作目录及其子目录加入头文件搜索路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 4. 定义可执行文件
# 这里假设您的源代码文件是 main.cpp
# 您可以手动添加，也可以用通配符（不推荐用于大型项目，但小项目没问题）
add_executable(${PROJECT_NAME}
    main.cpp
    # 可以继续添加其他 .cpp 文件，例如：
    # src/utility.cpp
    # src/another_file.cpp
)

# 5. 可选：生成 compile_commands.json 文件，为 clangd 等语言服务器提供极佳的智能提示
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)