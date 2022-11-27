//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once
#include <iostream>
template <typename T>

class Array
{
private:
    T * _array;
    unsigned int _n;

 public:
    Array() : _n(0)
    {
        _array = new T[0];
    }

    Array(unsigned int n) : _n(n)
    {
        _array = new T[n];
    }
    Array(Array const &src)
    {
        _n = src._n;
        _array = new T[_n];
        for (unsigned int i = 0; i < _n ; i++)
            _array[i] = src._array[i];
    }
    virtual ~Array()
    {
        delete[] this->_array;
    }
    Array& operator=(const Array &rhs)
    {
        if (this != &rhs)
        {
            if (this-_array)
                delete[] this->_array;
            _n = rhs._n;
            _array = new T[_n];
            for (unsigned int i = 0; i < _n ; i++)
                _array[i] = rhs._array[i];
        }
        return *this;
    }

    T& operator[](const unsigned int index)
    {
        if (index < 0 || index >= static_cast<long>(_n))
            throw std::out_of_range("Index is out of range");
        return _array[index];
    }
    unsigned int size()
    {
        return _n;
    }
};
