//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog: Assignation operator called" << std::endl;
	_type = rhs._type;

	return (*this);
}

void Dog::makeSound() const {
    std::cout << _type << " says woof woof" << std::endl;
}