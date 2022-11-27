//
// Created by Marleen Maryjane on 1/15/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat: Assignation operator called" << std::endl;
	_type = rhs._type;

	return (*this);
}

void WrongCat::makeSound() const {
    std::cout << _type << " says meow meow" << std::endl;
}