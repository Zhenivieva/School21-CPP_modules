#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()

{
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
    rrf = someRandomIntern.makeForm("ShrubberyCreation", "Bender");
    rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");

    return 0;
}

