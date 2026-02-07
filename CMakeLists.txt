# 指定 CMake 最低版本要求
cmake_minimum_required(VERSION 3.16)

# 设置项目名称和版本
project(QT04_mingw VERSION 1.0.0
        DESCRIPTION "Qt CMake Project"
        LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 自动处理 MOC、UIC 和 RCC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 查找 Qt 库
find_package(Qt6 COMPONENTS Widgets REQUIRED)

# 设置源文件
set(SOURCES
    main.cpp
    mainwindow.cpp
)

# 设置头文件
set(HEADERS
    mainwindow.h
)

# 设置 UI 文件
set(FORMS
    mainwindow.ui
)

# 创建可执行文件
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${FORMS})

# 链接 Qt 库
target_link_libraries(${PROJECT_NAME} Qt6::Widgets)

# 设置可执行文件的输出目录
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
