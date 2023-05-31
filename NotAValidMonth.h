//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_NOTAVALIDMONTH_H
#define PR3_NOTAVALIDMONTH_H
#include<exception>

class NotAValidMonth:public std::exception {
public:
    const char *what() const noexcept override;
};


#endif //PR3_NOTAVALIDMONTH_H
