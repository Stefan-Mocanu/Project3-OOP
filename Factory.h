//
// Created by Stefan on 01-Jun-23.
//
//Utilitatea acestui design pattern in aceasta aplicatie este faptul ca la crearea unui nou tip TransportCard, de exemplu
// abonament anual, nu necesita regandirea aplicatiei, aceasta clasa putand sa creeze orice element dintr-o clasa care are ca
// parinte TransportCard
#ifndef PR3_FACTORY_H
#define PR3_FACTORY_H
#include "TransportCard.h"
#include <memory>
#include "MonthlyPass.h"
#include<typeinfo>
#include<cstring>
template<typename T>
class Factory {
    Factory() = default;
    Factory(Factory& r)=default;
    ~Factory() =default;
    Factory<T>& operator=(Factory<T> &rhs)=default;
    static Factory<T>* inst;
public:
    std::shared_ptr<TransportCard> create(){
        return std::make_shared<T>();
    }
    std::shared_ptr<TransportCard> create(int y,int m){
        return std::make_shared<T>();
    }
    static Factory<T> *getInstance(){
        if(inst==nullptr){
            inst = new Factory<T>();
        }return inst;
    }
};
template<typename T>
Factory<T>* Factory<T>::inst=nullptr;

template<>
std::shared_ptr<TransportCard> Factory<MonthlyPass>::create(int y,int m){
    return std::make_shared<MonthlyPass>(y,m);
}
#endif //PR3_FACTORY_H
