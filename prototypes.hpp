#ifndef PROTOTYPES_HPP
#define PROTOTYPES_HPP

#include <iostream>

template <typename T>
class MyStack
{
    public:
    bool empty();
    size_t size();
    T top();
    void push(T);
    void pop();

    private:
    size_t s_size;
    T* s_ptr;
};

#include "implementations.hpp"

#endif