//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Animal.hpp"

Animal::Animal() : _type("Unknown")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal: Constructor with type called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal: Assignation operator called" << std::endl;
	_type = rhs._type;

	return (*this);
}

const std::string &Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << _type << " animal says unknown sound" << std::endl;
}
