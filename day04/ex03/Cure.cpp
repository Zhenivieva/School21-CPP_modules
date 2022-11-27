//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &rhs)
{
	_type = rhs._type;

	return (*this);
}

Cure* Cure::clone() const {
   return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* sheals " << target.getName() << "'s wounds *" << std::endl;
}