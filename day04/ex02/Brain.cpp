//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain: Assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

void Brain::setIdea(int i, std::string idea) {
    this->_ideas[i] = idea;
}

std::string Brain::getIdea(int i) {
    return this->_ideas[i];
}