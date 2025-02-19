# To create a dll library for Qt 
# It works
# be careful with cmake auto
# go to terminal and write commands hereafter has but control :
#   cd build
#   cmake ..
#   cmake --build --verbose .  

cmake_minimum_required(VERSION 3.10)

project(MyLibrary)

# permet d'accéder aux symboles de deboggage et création du fichier.pdb
set(CMAKE_BUILD_TYPE Debug)

# Trouver Qt
find_package(Qt5 REQUIRED COMPONENTS Core Qml)

# Enable AUTOMOC for Qt classes
set(CMAKE_AUTOMOC ON)

# Créer la DLL
add_library(mylibrary SHARED mylibrary.cpp)

# Créer l'exécutable
#add_executable(main main.cpp)

# Lier avec Qt
target_link_libraries(mylibrary Qt5::Core Qt5::Qml)
