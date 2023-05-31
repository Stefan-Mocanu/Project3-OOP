//
// Created by Stefan on 31-May-23.
//

#include "MonthlyPass.h"

MonthlyPass::MonthlyPass(int year, int month) : year(year), month(month) {}

MonthlyPass::~MonthlyPass() {

}

void MonthlyPass::afis(std::ostream &os) const {
    os<<"MonthlyPass\n";
    TransportCard::afis(os);
    os<<"Expire date:"<<month<<"/"<<year<<"\n";
}

void MonthlyPass::update() {
    if(month==12){
        month =1;
        year++;
    }else{
        month++;
    }
    TransportCard::update();
}

int MonthlyPass::getYear() const {
    return year;
}

int MonthlyPass::getMonth() const {
    return month;
}

MonthlyPass::MonthlyPass(MonthlyPass &MP):TransportCard(MP) {
    year = MP.year;
    month = MP.month;
}
