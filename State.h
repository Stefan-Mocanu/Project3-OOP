//
// Created by Stefan on 01-Jun-23.
//

#ifndef PR3_STATE_H
#define PR3_STATE_H
#include<typeinfo>
#include<cstring>
#include"TransportCard.h"
#include "SingleUseTicket.h"
#include "TenUsesTicket.h"
#include "MonthlyPass.h"
#include<chrono>
class State {
public:
    State()=default;
    virtual ~State()=0;
};






#endif //PR3_STATE_H
