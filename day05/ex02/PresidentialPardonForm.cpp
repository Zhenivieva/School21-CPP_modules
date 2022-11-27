//
// Created by Marleen Maryjane on 1/15/22.
//

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardon", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), 25, 5, src.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	_target = rhs._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!(this->isSigned()))
        throw FormIsNotSignedException();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
