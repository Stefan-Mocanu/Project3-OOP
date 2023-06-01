cmake_minimum_required(VERSION 3.24)
project(pr3)

set(CMAKE_CXX_STANDARD 20)

add_executable(pr3 main.cpp MetroTrain.cpp MetroTrain.h Route.cpp Route.h Station.cpp Station.cpp TransportCard.cpp TransportCard.h SingleUseTicket.cpp SingleUseTicket.h TenUsesTicket.cpp TenUsesTicket.h MonthlyPass.cpp MonthlyPass.h NotAValidMonth.cpp NotAValidMonth.h CantUpdateAnymore.cpp CantUpdateAnymore.h clone.cpp Factory.h State.cpp Active.h NotActive.h)
