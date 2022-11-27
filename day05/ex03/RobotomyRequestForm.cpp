//
// Created by Marleen Maryjane on 1/15/22.
//

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequest", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), 72, 45, src.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	_target = rhs._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!(this->isSigned()))
        throw FormIsNotSignedException();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    std::srand(time(0));
    if (std::rand() % 2)
        std::cout << "Shhhhhhhh... " << std::endl
                  << this->_target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed." << std::endl;
}
