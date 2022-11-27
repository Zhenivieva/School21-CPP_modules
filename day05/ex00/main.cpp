#include "Bureaucrat.hpp"

#include <iostream>


int main()
{
    try
    {
//        Bureaucrat wrong1("Mark", 0);

//        Bureaucrat wrong2("Mark", 200);
//
//        Bureaucrat low("Mark", 1);
//        low.decrementGrade();
//
//        Bureaucrat high("Mark", 150);
//        high.incrementGrade();

        Bureaucrat normal1("Mark", 50);
        normal1.incrementGrade();
        normal1.decrementGrade();

        Bureaucrat normal2("Mark", 35);
        normal2 = normal1;
        Bureaucrat normal3(normal1);

        std::cout << normal1 << std::endl;
        std::cout << normal2 << std::endl;

        std::cout << normal3 << std::endl;
     }
     catch (std::exception &e)
     {
         std::cerr << e.what() << std::endl;
     }

    return 0;
}
