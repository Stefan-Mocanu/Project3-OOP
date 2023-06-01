//
// Created by Stefan on 01-Jun-23.
//

#ifndef PR3_NOTACTIVE_H
#define PR3_NOTACTIVE_H
#include"State.h"
#include"TransportCard.h"
#include "MonthlyPass.h"
class NotActive:public State{
public:
    NotActive()=default;
    ~NotActive()override=default;
    template<typename T>
    void update(T& ob);
};


template<typename T>
void NotActive::update(T& ob) {
}
template<>
void NotActive::update(MonthlyPass &ob){
    ob.update();
    ob.activate();
}
#endif //PR3_NOTACTIVE_H
