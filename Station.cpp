//
// Created by Stefan on 31-May-23.
//

#include "Station.h"

Station::Station(const std::string &name) : name(name) {id = id_gen<Station>::get_id();}

Station::Station() {id = id_gen<Station>::get_id();}

const std::string &Station::getId() const {
    return id;
}

void Station::setId(const std::string &id) {
    Station::id = id;
}

const std::string &Station::getName() const {
    return name;
}

void Station::setName(const std::string &name) {
    Station::name = name;
}

std::ostream &operator<<(std::ostream &os, const Station &station) {
    os << "id: " << station.id << " name: " << station.name;
    return os;
}

Station::~Station() {

}

Station::Station(const Station &st) {
    id = st.id;
    name=st.name;
}
