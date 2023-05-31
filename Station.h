//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_STATION_H
#define PR3_STATION_H
#include "id_gen.h"
#include<string>
#include <ostream>

class Station {
    std::string id,name;
public:
    explicit Station(const std::string &name);
    Station(const Station &st);
    Station();

    virtual ~Station();

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    friend std::ostream &operator<<(std::ostream &os, const Station &station);
};


#endif //PR3_STATION_H
