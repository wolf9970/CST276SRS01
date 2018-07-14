cmake_minimum_required(VERSION 3.10)
project(Observer)

set(CMAKE_CXX_STANDARD 17)

add_executable(Observer main.cpp Observer.cpp Observer.h Subject.cpp Subject.h ConcreteObserver.cpp ConcreteObserver.h ConcreteSubject.cpp ConcreteSubject.h)