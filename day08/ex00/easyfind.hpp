//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &t, int n)
{
    typename T::iterator begin = t.begin();
    typename T::iterator end = t.end();
    typename T::iterator result = std::find(begin, end, n);
    if (result != end)
        return (result);
    throw std::runtime_error("Вхождение не найдено");
}