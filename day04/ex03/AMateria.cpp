//
// Created by Marleen Maryjane on 1/15/22.
//

#include "AMateria.hpp"

AMateria::AMateria() : _type("Unknown")
{
}

AMateria::AMateria(const std::string &type) : _type(type)
{
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	_type = rhs._type;

	return (*this);
}

const std::string &AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void) target;
}
