#include "Span.hpp"
//#include <list>
//#include <vector>
//#include <set>
//#include <iostream>

int main()
{
    Span sp1 = Span(5);
    Span sp2 = Span(10001);
    Span sp3 = Span(1);
    std::vector<int> vector;
    sp1.addNumber(6);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    sp1.addNumber(11);



    for  (int i = 0; i < 10001; i++)
        vector.push_back(i);
    sp2.addNumber(vector.begin(), vector.end());


    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    try {
        std::cout << sp3.longestSpan() << std::endl;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    sp3.addNumber(3);

    try {
        std::cout << sp3.shortestSpan() << std::endl;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        sp3.addNumber(3);
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}