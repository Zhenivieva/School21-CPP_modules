//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &rhs)
{
	_type = rhs._type;

	return (*this);
}

Ice* Ice::clone() const {
   return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}