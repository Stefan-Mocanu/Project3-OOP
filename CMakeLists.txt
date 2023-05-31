cmake_minimum_required(VERSION 3.24)
project(pr3)

set(CMAKE_CXX_STANDARD 17)

add_executable(pr3 main.cpp MetroTrain.cpp id_gen.cpp Station.h Route.h Route.cpp Station.cpp TransportCard.cpp SingleUseTicket.h SingleUseTicket.cpp TenUsesTicket.cpp MonthlyPass.cpp NotAValidMonth.h NotAValidMonth.cpp CantUpdateAnymore.cpp clone.cpp)
