//
// Created by Stefan on 31-May-23.
//

#include "id_gen.h"

template<typename T>
std::string id_gen<T>::get_id() {
    return typeid(T).name() + std::string(++id);
}