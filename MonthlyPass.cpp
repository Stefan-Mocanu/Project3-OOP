//
// Created by Stefan on 31-May-23.
//

#include <chrono>
#include "MonthlyPass.h"

MonthlyPass::MonthlyPass(int year, int month) : year(year), month(month) {}

MonthlyPass::~MonthlyPass() {

}

void MonthlyPass::afis(std::ostream &os) const {
    os<<"MonthlyPass\n";
    TransportCard::afis(os);
    os<<"Expire date: "<<month<<"/"<<year<<"\n";
}
bool MonthlyPass::check(){
    std::chrono::time_point now{std::chrono::system_clock::now()};
    std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
    return (year> static_cast<int>(ymd.year()) || (
            year == static_cast<int>(ymd.year()) &&
            month>static_cast<unsigned>(ymd.month())))
}
void MonthlyPass::update() {
    std::chrono::time_point now{std::chrono::system_clock::now()};
    std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
    year= static_cast<int>(ymd.year());
    month= static_cast<unsigned>(ymd.month())+1;
    if(month==13){
        month =1;
        year++;
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


MonthlyPass::MonthlyPass() {
    std::chrono::time_point now{std::chrono::system_clock::now()};
    std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
    year= static_cast<int>(ymd.year());
    month= static_cast<unsigned>(ymd.month());
}
