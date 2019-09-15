cmake_minimum_required(VERSION 3.13)
project(BankSimulation)

set(CMAKE_CXX_STANDARD 14)

add_executable(BankSimulation main.cpp Caissier.h Banque.h Caissier.cpp Poisson.h Client.h Client.cpp Banque.cpp FileAttente.cpp FileAttente.h)