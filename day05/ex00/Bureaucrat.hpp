//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>

class Bureaucrat
{
protected:
	const std::string _name;
	int _grade;
    class GradeTooHighException : public std::exception
    {
    public:
        virtual  const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual  const char* what() const throw();
    };
    Bureaucrat();

public:
    Bureaucrat(const std::string &name, int const &grade);
    Bureaucrat(Bureaucrat const &src);
	virtual ~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat &rhs);

    const std::string &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);