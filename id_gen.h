//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_ID_GEN_H
#define PR3_ID_GEN_H
#include<string>
#include<typeinfo>
#include<cstdlib>
#include<string>
template<typename T>
class id_gen {
    static int id;
public:
    static std::string get_id(){
        std::string s1 = typeid(T).name(),s2 = std::to_string(++id);
        return s1+s2;
    }
};

template<typename T>
int id_gen<T>::id = 0;




#endif //PR3_ID_GEN_H
