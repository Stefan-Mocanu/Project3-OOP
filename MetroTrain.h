//
// Created by Stefan on 31-May-23.
//

#ifndef PR3_METROTRAIN_H
#define PR3_METROTRAIN_H
#include<string>
#include <ostream>
#include"id_gen.h"
class MetroTrain {
    std::string id,name,producator;
public:
    MetroTrain(const std::string &name, const std::string &producator);
    MetroTrain();
    friend std::ostream &operator<<(std::ostream &os, const MetroTrain &train);
    MetroTrain(MetroTrain& MT);
    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getProducator() const;

    void setProducator(const std::string &producator);

    virtual ~MetroTrain();

};


#endif //PR3_METROTRAIN_H
