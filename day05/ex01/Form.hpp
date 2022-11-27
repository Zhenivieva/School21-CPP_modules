//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeToSign;
    const int _gradeToExec;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
    Form();

public:
    const std::string &getName() const;

    bool isSigned() const;

    const int getGradeToSign() const;

    const int getGradeToExec() const;

    Form(const std::string &name, const int &gToSign, const int &gToExec);
    Form(Form const &src);
	virtual ~Form();
    Form& operator=(const Form &rhs);

    void beSigned(Bureaucrat &bureaucrat);

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);