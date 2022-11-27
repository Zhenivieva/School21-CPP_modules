//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}


Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &rhs)
{
	return (*this);
}

Form* Intern::makeForm(std::string formName, std::string formTarget)
{
    Form *result;
    Form *templates[3] = {new ShrubberyCreationForm(formTarget),
                          new RobotomyRequestForm(formTarget),
                          new PresidentialPardonForm(formTarget)};
    for (int i = 0; i < 3; i++)
    {
        if (templates[i]->getName().compare(formName) == 0)
        {
            result = templates[i];
            std::cout << "Intern creates " << templates[i]->getName() <<std::endl;
            delete templates[0];
            delete templates[1];
            delete templates[2];
            return  result;
        }
    }
    std::cout << "There are no such form: " << formName <<std::endl;
    return  NULL;
}


