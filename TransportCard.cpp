//
// Created by Stefan on 31-May-23.
//

#include "TransportCard.h"

TransportCard::TransportCard() {id = id_gen<TransportCard>::get_id();}

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
}
