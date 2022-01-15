//
// Created by Marleen Maryjane on 12/26/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fPointValue(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
//	std::cout << "Int constructor called" << std::endl;
	_fPointValue = n * (1 << _fBits);
}

Fixed::Fixed(float const n)
{
//	std::cout << "Float constructor called" << std::endl;
	_fPointValue = (int)roundf(n * (1 << _fBits));
}

Fixed::Fixed(Fixed const &src)
{
//	std::cout << "Copy constructor called" << std::endl;
	_fPointValue = src.getRawBits();
	*this = src;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
//	std::cout << "Assignation operator called" << std::endl;
	_fPointValue = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
//	std::cout << "getRawBits member function called" << std::endl;
	return _fPointValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fPointValue = raw;
}

float:: Fixed::toFloat() const
{
	return ((float)_fPointValue / (float)(1 << _fBits));
}

int:: Fixed::toInt() const
{
	return (_fPointValue >> _fBits);
}

std::ostream& operator<< (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

//overloads math:
Fixed Fixed::operator+(Fixed const &rhs)
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return Fixed(toFloat() / rhs.toFloat());
}

//incr and decr:
Fixed &Fixed::operator++()
{
	_fPointValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed &Fixed::operator--()
{
	_fPointValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

//overload compar:
bool Fixed::operator>(Fixed const &rhs)
{
	return(this->_fPointValue > rhs._fPointValue);
}

bool Fixed::operator>=(Fixed const &rhs)
{
	return(this->_fPointValue >= rhs._fPointValue);
}

bool Fixed::operator<(Fixed const &rhs)
{
	return(this->_fPointValue < rhs._fPointValue);
}

bool Fixed::operator<=(Fixed const &rhs)
{
	return(this->_fPointValue <= rhs._fPointValue);
}

bool Fixed::operator==(Fixed const &rhs)
{
	return(this->_fPointValue == rhs._fPointValue);
}

bool Fixed::operator!=(Fixed const &rhs)
{
	return(this->_fPointValue != rhs._fPointValue);
}

//min, max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a._fPointValue < b._fPointValue)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a._fPointValue > b._fPointValue)
		return a;
	return b;
}

//overload min, max
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if(a._fPointValue < b._fPointValue)
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if(a._fPointValue > b._fPointValue)
		return a;
	return b;
}


