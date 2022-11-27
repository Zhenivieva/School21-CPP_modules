//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>
#include "Form.hpp"

//class Form;
class Intern
{
public:

    Intern();
    Intern(Intern const &src);
	virtual ~Intern();
    Intern& operator=(const Intern &rhs);

    Form* makeForm(std::string formName, std::string formTarget);
};
