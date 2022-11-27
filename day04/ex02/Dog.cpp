//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->_brain = new Brain();
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = src;
    delete _brain;
    this->_brain = new Brain(*src._brain);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog: Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog: Assignation operator called" << std::endl;
	_type = rhs._type;
    delete _brain;
    this->_brain = new Brain(*rhs._brain);

	return (*this);
}

void Dog::makeSound() const {
    std::cout << _type << " says woof woof" << std::endl;
}