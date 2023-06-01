#include <iostream>
#include"Factory.h"
#include"TransportCard.h"
#include"TenUsesTicket.h"
#include "MonthlyPass.h"
#include"SingleUseTicket.h"

int main() {
    std::cout << *(std::static_pointer_cast<TenUsesTicket>(Factory<TenUsesTicket>::getInstance()->create())) << std::endl;
    std::cout << *(std::static_pointer_cast<MonthlyPass>(Factory<MonthlyPass>::getInstance()->create())) << std::endl;
    std::cout << *(std::static_pointer_cast<SingleUseTicket>(Factory<SingleUseTicket>::getInstance()->create())) << std::endl;
    return 0;
}
