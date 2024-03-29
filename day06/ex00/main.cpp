#include "Static_cast.hpp"

#include <iostream>


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    try {
        Static_cast convert(argv[1]);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
