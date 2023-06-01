//
// Created by Stefan on 31-May-23.
//

#include "TransportCard.h"
#include"NotActive.h"
#include "Active.h"

TransportCard::TransportCard() {
    id = id_gen<TransportCard>::get_id();
    state = std::make_shared<Active>();
    st = true;
}

const std::string &TransportCard::getId() const {
    return id;
}

std::ostream &operator<<(std::ostream &os, const TransportCard &card) {
    card.afis(os);
    return os;
}

TransportCard::~TransportCard() {
}

void TransportCard::afis(std::ostream &os)const {
    os<<"id: "<<id<<" ";
}

TransportCard::TransportCard(TransportCard &card) {
    id = card.id;
    state = card.state;
    st = card.st;
}

void TransportCard::activate() {
    state = std::make_shared<Active>();
    st= true;
}

void TransportCard::deActivate() {
    state = std::make_shared<NotActive>();
    st=false;
}

std::shared_ptr<State> TransportCard::getState() const {
    return state;
}

bool TransportCard::isSt() const {
    return st;
}
