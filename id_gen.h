//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_ID_GEN_H
#define PR3_ID_GEN_H
#include<string>
#include<typeinfo>
template<typename T>
class id_gen : public std::basic_string<char> {
    static int id;
public:
    static std::string get_id();
};




#endif //PR3_ID_GEN_H
