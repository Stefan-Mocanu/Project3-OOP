//
// Created by Stefan on 31-May-23.
//

#include "MetroTrain.h"

MetroTrain::MetroTrain(const std::string &name, const std::string &producator) : name(name), producator(producator) {id = id = id_gen<MetroTrain>::get_id();}

MetroTrain::MetroTrain() {id = id_gen<MetroTrain>::get_id();}

std::ostream &operator<<(std::ostream &os, const MetroTrain &train) {
    os << "id: " << train.id << " name: " << train.name << " producator: " << train.producator;
    return os;
}

MetroTrain::~MetroTrain() {

}

const std::string &MetroTrain::getId() const {
    return id;
}

void MetroTrain::setId(const std::string &id) {
    MetroTrain::id = id;
}

const std::string &MetroTrain::getName() const {
    return name;
}

void MetroTrain::setName(const std::string &name) {
    MetroTrain::name = name;
}

const std::string &MetroTrain::getProducator() const {
    return producator;
}

void MetroTrain::setProducator(const std::string &producator) {
    MetroTrain::producator = producator;
}

MetroTrain::MetroTrain(MetroTrain &MT) {
    MetroTrain::id = MT.id;
    MetroTrain::name = MT.name;
    MetroTrain::producator = MT.producator;
}
