cmake_minimum_required(VERSION 3.22)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp AMateria.cpp AMateria.h Character.cpp Character.h ICharacter.h Cure.cpp Cure.h Ice.cpp Ice.h IMateriaSource.cpp IMateriaSource.h MateriaSource.cpp MateriaSource.h)
