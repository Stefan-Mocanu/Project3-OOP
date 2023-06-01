#include <iostream>
#include<vector>
#include<memory>
#include<string>
#include"Factory.h"
#include"TransportCard.h"
#include"TenUsesTicket.h"
#include "MonthlyPass.h"
#include"SingleUseTicket.h"
#include"MetroTrain.h"
#include "Station.h"
#include "Route.h"
#include "NotAValidMonth.h"
#include "Active.h"
#include "NotActive.h"

int main() {
    int n;
    std::cout<<"How many metro trais: ";std::cin>>n;
    std::vector<MetroTrain> trains;
    for(int i = 0;i<n;i++){
        std::string name,producer;
        std::cin>>name>>producer;
        trains.push_back(MetroTrain(name,producer));
    }
    std::cout<<"How many routes: ";std::cin>>n;
    std::vector<Route> routes;
    for(int i = 0;i<n;i++){
        std::string name;
        std::cin>>name;
        std::list<Station> stations;
        int m;
        std::cout<<"How many stations: ";std::cin>>m;
        for(int j = 0;j<m;j++){
            std::string name1;
            std::cin>>name;
            stations.push_back(Station(name1));
        }
        routes.push_back(Route(name,stations));
    }
    std::cout<<"How many transportation cards: ";std::cin>>n;
    std::vector<std::shared_ptr<TransportCard>> cards;
    for(int i = 0; i<n; i++){
        int tip;
        std::cin>>tip;
        switch(tip){
            case 1:{
                cards.push_back(Factory<SingleUseTicket>::getInstance()->create());
            }
            case 2:{
                cards.push_back(Factory<TenUsesTicket>::getInstance()->create());
            }
            case 3:{
                cards.push_back(Factory<MonthlyPass>::getInstance()->create());
            }
            case 4:{
                while(true){
                    int y,m;
                    std::cin>>y>>m;
                    try{
                        if(m>12)throw NotAValidMonth();
                        cards.push_back(Factory<SingleUseTicket>::getInstance()->create(y,m));
                        break;
                    }catch(NotAValidMonth &e){
                        std::cout<<e.what()<<"Try again";
                    }
                }
            }
        }
    }

    std::cout<<"How many updates: "; std::cin>>n;
    for(int i=0;i<n;i++){
        int index;
        std::cin>>index;

        if(cards[index]->isSt()){
            std::dynamic_pointer_cast<Active>(cards[index]->getState())->update(cards[index]);
        }else{
            std::dynamic_pointer_cast<NotActive>(cards[index]->getState())->update(cards[index]);
        }
    }
    for(auto elem: cards){
        if(elem->isSt())std::cout<<*elem;
    }
    return 0;
}
