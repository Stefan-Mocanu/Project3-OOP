//
// Created by Stefan on 31-May-23.
//

#include "TenUsesTicket.h"
#include"CantUpdateAnymore.h"
#include<iostream>
TenUsesTicket::TenUsesTicket()  {usages=0;}

int TenUsesTicket::getUsages() const {
    return usages;
}

TenUsesTicket::~TenUsesTicket() {

}

void TenUsesTicket::update() {
    if(usages!=10){
        usages++;
    }

}

void TenUsesTicket::afis(std::ostream &os) const {
    os<<"TenUsesTicket\n";
    TransportCard::afis(os);
    os<<"usages: "<<usages;
}

TenUsesTicket::TenUsesTicket(TenUsesTicket &TUT): TransportCard(TUT) {
    usages = TUT.usages;
}
