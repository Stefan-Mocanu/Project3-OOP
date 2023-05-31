//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_MONTHLYPASS_H
#define PR3_MONTHLYPASS_H
#include "TransportCard.h"

class MonthlyPass:public TransportCard {
    int year,month;
public:
    MonthlyPass(int year, int month);

    ~MonthlyPass() override;

    int getYear() const;

    int getMonth() const;

    void afis(std::ostream &os) const override;
    MonthlyPass(MonthlyPass &MP);
    void update() override;
};


#endif //PR3_MONTHLYPASS_H
