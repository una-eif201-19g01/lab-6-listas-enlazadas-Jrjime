cmake_minimum_required(VERSION 3.14)
project(lab_6_listas_enlazadas)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Libro.cpp Libro.h Nodo.h Nodo.cpp ListaLibros.cpp ListaLibros.h)

add_executable(NumerosRacionales ${SOURCE_FILES})