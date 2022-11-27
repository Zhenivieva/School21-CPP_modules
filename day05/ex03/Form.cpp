//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Form.hpp"

Form::Form() : _name("Unknown"), _gradeToSign(10), _gradeToExec(100), _signed(false), _target("Unknown")
{
}

Form::Form(const std::string &name, const int &gToSign, const int &gToExec, const std::string &target) :
_name(name), _gradeToSign(gToSign), _gradeToExec(gToExec), _target(target)
{
    _signed = false;
    if (_gradeToSign < 1 or _gradeToExec < 1)
        throw GradeTooHighException();
    else if (_gradeToSign > 150 or _gradeToExec > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _gradeToSign(src._gradeToSign),
_gradeToExec(src._gradeToExec), _target(src._target), _signed(src._signed)
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &rhs)
{
	_signed = rhs._signed;
	return (*this);
}

const std::string &Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _signed;
}

const int Form::getGradeToSign() const {
    return _gradeToSign;
}

const int Form::getGradeToExec() const {
    return _gradeToExec;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw GradeTooLowException();
}

const std::string &Form::getTarget() const {
    return _target;
}


std::ostream& operator<< (std::ostream &out, const Form &obj)
{
    out << "Form " << obj.getName() << " is signed: " << (obj.isSigned() ? "yes" : "no") << std::endl
    << "    " << " has grade to sign " << obj.getGradeToSign() << std::endl
    << "    " << " has grade to execute " << obj.getGradeToExec() << std::endl;
    return (out);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Error: Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Error: Grade is too low");
}

const char* Form::FormIsNotSignedException::what() const throw()
{
    return ("Error: Form is not signed");
}