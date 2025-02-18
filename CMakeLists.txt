cmake_minimum_required(VERSION 3.0)

project(MyLibrary)

# Trouver Qt
find_package(Qt5 REQUIRED COMPONENTS Core Qml)

# Créer la DLL
add_library(mylibrary SHARED mylibrary.cpp)

# Lier avec Qt
target_link_libraries(mylibrary Qt5::Core Qt5::Qml)
