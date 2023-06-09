//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_TRANSPORTCARD_H
#define PR3_TRANSPORTCARD_H
#include "id_gen.h"
#include<string>
#include <ostream>
#include"State.h"
#include<memory>
class TransportCard {
    std::string id;
    std::shared_ptr<State> state;
    bool st;
public:
    virtual void update()=0;

    std::shared_ptr<State> getState() const;

    bool isSt() const;

    TransportCard();
    TransportCard(TransportCard & card);
    virtual ~TransportCard();
    void activate();
    void deActivate();
    const std::string &getId() const;
    virtual void afis(std::ostream &os)const;
    friend std::ostream &operator<<(std::ostream &os, const TransportCard &card);
};


#endif //PR3_TRANSPORTCARD_H
