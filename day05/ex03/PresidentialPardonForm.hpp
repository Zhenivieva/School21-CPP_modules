//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

    virtual void execute(Bureaucrat const &executor) const;
};
