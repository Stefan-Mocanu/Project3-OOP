//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_TENUSESTICKET_H
#define PR3_TENUSESTICKET_H
#include"TransportCard.h"

class TenUsesTicket: public TransportCard{
    int usages;
public:
    explicit TenUsesTicket();

    int getUsages() const;
    TenUsesTicket(TenUsesTicket &TUT);
    ~TenUsesTicket() override;

    void update() override;

    void afis(std::ostream &os) const override;
};


#endif //PR3_TENUSESTICKET_H
