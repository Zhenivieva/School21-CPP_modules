//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);

    virtual void execute(Bureaucrat const &executor) const;
};
