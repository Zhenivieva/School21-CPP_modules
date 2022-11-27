#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>


int main()
{
    Bureaucrat mark("Mark", 5);
    Bureaucrat matvey("Matvey", 140);
    Form *form1 = new ShrubberyCreationForm("home");
    try {
        form1->beSigned(mark);
        std::cout << *form1;
        form1->execute(mark);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
//    try {
//        form1->beSigned(matvey);
//        std::cout << *form1;
//        form1->execute(matvey);
//    }
//    catch (std::exception &e) {
//        std::cerr << "e.what() << std::endl;
//    }
    delete form1;

    Form *form2 = new RobotomyRequestForm("Karl");
    try {
        form2->beSigned(mark);
        std::cout << *form2;
        form2->execute(mark);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
//    try {
//        form2->beSigned(matvey);
//        std::cout << *form2;
//        form2->execute(matvey);
//    }
//    catch (std::exception &e) {
//        std::cerr << e.what() << std::endl;
//    }
    delete form2;

    Form *form3 = new PresidentialPardonForm("Edvard");
    try {
        form3->beSigned(mark);
        std::cout << *form3;
        form3->execute(mark);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
//    try {
//        form3->beSigned(matvey);
//        std::cout << *form3;
//        form3->execute(matvey);
//    }
//    catch (std::exception &e) {
//        std::cerr << e.what() << std::endl;
//    }
    delete form3;

    return 0;
}

