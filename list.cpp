//
// Created by andy on 5/17/22.
//

#include "list.h"
template<typename T>
list<T>::list(T head, list<T> tail) : head(head), tail(&tail) {

}

template<typename T>
list<T>::list(T head, list<T> *tail) : head(head), tail(tail) {

}

template<typename T>
int list<T>::size() {
    if (tail)
        return 1 + tail->size();
    else
        return 1;
}

template<typename T>
bool list<T>::contains(T query) {
    if (head == query)
        return true;
    else if (tail == nullptr){
        return false;
    } else {
        return tail->contains(query);
    }
}

template<typename T>
std::string list<T>::__repr__(){
    if (tail)
        return head.__repr__() + ", " + tail->__repr__();
    else
        return head.__repr__();
}
