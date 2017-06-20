cmake_minimum_required(VERSION 3.7)
project(ex06)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES_02
        ex02/main.cpp
        ex02/Zombie.cpp
        ex02/Zombie.hpp
        ex02/ZombieEvent.cpp
        ex02/ZombieEvent.hpp)

AUX_SOURCE_DIRECTORY(ex05 SF_05)

set(SOURCE_FILES_06
        ex06/HumanA.cpp
        ex06/HumanA.hpp
        ex06/HumanB.cpp
        ex06/HumanB.hpp
        ex06/main.cpp
        ex06/Weapon.cpp
        ex06/Weapon.hpp)

AUX_SOURCE_DIRECTORY(ex07 SF_07)
AUX_SOURCE_DIRECTORY(ex08 SF_08)
AUX_SOURCE_DIRECTORY(ex09 SF_09)
AUX_SOURCE_DIRECTORY(ex10 SF_10)

add_executable(ex02 ${SOURCE_FILES_02})
add_executable(ex06 ${SOURCE_FILES_06})
add_executable(ex05 ${SF_05})
add_executable(ex07 ${SF_07})
add_executable(ex08 ${SF_08})
add_executable(ex09 ${SF_09})
add_executable(ex10 ${SF_10})
