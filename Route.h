//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_ROUTE_H
#define PR3_ROUTE_H
#include<string>
#include"id_gen.h"
#include<list>
#include <ostream>
#include"Station.h"
class Route {
    std::string id,name;
    std::list<Station> stations;
public:
    Route(const std::string &name, const std::list<Station> &stations);

    Route();

    virtual ~Route();

    friend std::ostream &operator<<(std::ostream &os, const Route &route);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::list<Station> &getStations() const;

    void setStations(const std::list<Station> &stations);

    void addStationFront(const Station& st);

    void addStationBack(const Station& st);
};


#endif //PR3_ROUTE_H
