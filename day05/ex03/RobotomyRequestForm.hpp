//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);

    virtual void execute(Bureaucrat const &executor) const;
};
