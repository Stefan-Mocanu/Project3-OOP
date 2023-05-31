//
// Created by Stefan on 31-May-23.
//

#include "SingleUseTicket.h"

SingleUseTicket::SingleUseTicket():TransportCard() {used=false;}

SingleUseTicket::~SingleUseTicket() {

}

void SingleUseTicket::afis(std::ostream &os) const {
    os<<"SingleUseTicket";
    TransportCard::afis(os);
    os<<"used "<<used<<"\n";
}

void SingleUseTicket::update() {
    used = true;
    TransportCard::update();
}

SingleUseTicket::SingleUseTicket(SingleUseTicket &SUT):TransportCard(SUT) {
    used = SUT.used;
}
