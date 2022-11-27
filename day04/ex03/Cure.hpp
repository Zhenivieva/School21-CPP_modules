//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "AMateria.hpp"

class Cure : virtual public AMateria
{

public:
    Cure();
    Cure(Cure const &src);
	~Cure();
    Cure& operator=(const Cure &rhs);

    virtual Cure* clone() const;
    virtual void use(ICharacter& target);
};

