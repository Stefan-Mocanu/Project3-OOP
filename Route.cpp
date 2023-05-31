//
// Created by Stefan on 31-May-23.
//

#include "Route.h"

Route::Route(const std::string &name, const std::list<Station> &stations) : name(name){
    id = id_gen<Route>::get_id();
    for(auto elem: stations)Route::stations.push_back(elem);
}

Route::Route() {id = id_gen<Route>::get_id();}

Route::~Route() {

}

const std::string &Route::getId() const {
    return id;
}

void Route::setId(const std::string &id) {
    Route::id = id;
}

const std::string &Route::getName() const {
    return name;
}

void Route::setName(const std::string &name) {
    Route::name = name;
}

const std::list<Station> &Route::getStations() const {
    return stations;
}

void Route::setStations(const std::list<Station> &stations) {
    Route::stations.clear();
    for(auto elem: stations)Route::stations.push_back(elem);
}

std::ostream &operator<<(std::ostream &os, const Route &route) {
    os << "id: " << route.id << " name: " << route.name << " stations: " ;
    for(auto elem :route.stations){
        os<<elem;
    }
    return os;
}

void Route::addStationFront(const Station &st) {
    stations.push_front(st);
}

void Route::addStationBack(const Station &st) {
    stations.push_back(st);
}


