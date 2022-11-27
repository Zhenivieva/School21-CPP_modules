#include "iter.hpp"

#include <iostream>

template <typename T>
void printItem(T const &t)
{
    std::cout << t << std::endl;
}

int main( void ) {
    int len = 5;

    int arrayInt[5] = {1, 2, 3, 4, 5};
    ::iter(arrayInt, len, printItem);

    char arrayChar[5] = {'a', 'b', 'c', 'd', 'e'};
    ::iter(arrayChar, len, printItem);

    return 0;
}
