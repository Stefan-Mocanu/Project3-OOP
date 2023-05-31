//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_SINGLEUSETICKET_H
#define PR3_SINGLEUSETICKET_H
#include"TransportCard.h"

class SingleUseTicket:public TransportCard {
    bool used;
public:
    SingleUseTicket();
    SingleUseTicket(SingleUseTicket& SUT);
    ~SingleUseTicket() override;

    void afis(std::ostream &os) const override;

    void update() override;
};


#endif //PR3_SINGLEUSETICKET_H
