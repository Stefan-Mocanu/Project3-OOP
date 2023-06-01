//
// Created by Stefan on 01-Jun-23.
//

#ifndef PR3_STATE_H
#define PR3_STATE_H
#include<typeinfo>
#include<cstring>
#include<chrono>
//prin ierarhia de clase care are ca radacina clasa State am implementat Design Patternul State, prin care vad daca un
//obiect de tipul TransportCard este activ sau nu
class State {
public:
    State()=default;
    virtual ~State()=0;
};

#endif //PR3_STATE_H
