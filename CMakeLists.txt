cmake_minimum_required(VERSION 3.24)
project(pr3)

set(CMAKE_CXX_STANDARD 20)

add_executable(pr3 main.cpp MetroTrain.cpp Route.cpp Station.cpp TransportCard.cpp SingleUseTicket.cpp TenUsesTicket.cpp MonthlyPass.cpp NotAValidMonth.cpp CantUpdateAnymore.cpp clone.cpp Factory.h State.cpp Active.h NotActive.h)
