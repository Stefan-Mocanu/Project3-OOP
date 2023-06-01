//
// Created by Stefan on 01-Jun-23.
//

#ifndef PR3_ACTIVE_H
#define PR3_ACTIVE_H
#include "State.h"
#include "SingleUseTicket.h"
#include "TenUsesTicket.h"
class Active:public State{
public:
    Active()=default;
    ~Active()override=default;
    template<typename T>
    void update(T& ob);
};
template<typename T>
void Active::update(T& ob) {

}
template<>
void Active::update(SingleUseTicket &ob){
    ob.update();
    ob.deActivate();
}
template<>
void Active::update(TenUsesTicket &ob){
    ob.update();
    if(ob.getUsages()==10)ob.deActivate();
}
template<>
void Active::update(MonthlyPass &ob){
    std::chrono::time_point now{std::chrono::system_clock::now()};
    std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
    if(ob.getYear()< static_cast<int>(ymd.year()) || (
            ob.getYear() == static_cast<int>(ymd.year()) &&
            ob.getMonth()<static_cast<unsigned>(ymd.month()))){ob.update();ob.deActivate();}
}
#endif //PR3_ACTIVE_H
