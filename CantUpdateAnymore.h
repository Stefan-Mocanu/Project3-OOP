//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_CANTUPDATEANYMORE_H
#define PR3_CANTUPDATEANYMORE_H
#include<exception>

class CantUpdateAnymore:public std::exception {
public:
    const char *what() const noexcept override;
};


#endif //PR3_CANTUPDATEANYMORE_H
