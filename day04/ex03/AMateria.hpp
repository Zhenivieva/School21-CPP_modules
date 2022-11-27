//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(const std::string &type);
	AMateria(AMateria const &src);
	virtual ~AMateria();
	AMateria& operator=(const AMateria &rhs);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

