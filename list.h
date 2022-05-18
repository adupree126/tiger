//
// Created by andy on 5/17/22.
//

#ifndef TIGER_LIST_H
#define TIGER_LIST_H

#include <string>

template<typename T>
class list {
public:
    T head;
    list<T> *tail;

    list(T head, list<T> tail);
    list(T head, list<T> *tail = nullptr);

    int size();
    bool contains(T query);

    std::string __repr__();
};
template<typename T>
bool find(T find_this,  list<T> in_this){
    return in_this.contains(find_this);
}

#endif //TIGER_LIST_H
