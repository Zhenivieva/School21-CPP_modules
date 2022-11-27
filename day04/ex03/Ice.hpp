//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "AMateria.hpp"

class Ice : virtual public AMateria
{

public:
    Ice();
    Ice(Ice const &src);
	~Ice();
    Ice& operator=(const Ice &rhs);

    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
};

