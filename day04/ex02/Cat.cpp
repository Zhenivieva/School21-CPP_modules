//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = src;
	delete _brain;
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat: Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat: Assignation operator called" << std::endl;
	_type = rhs._type;
    delete _brain;
    this->_brain = new Brain(*rhs._brain);

	return (*this);
}

void Cat::makeSound() const {
    std::cout << _type << " says meow meow" << std::endl;
}