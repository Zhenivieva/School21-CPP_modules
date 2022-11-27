//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria* _materias[4];
    Character();
public:
    Character(std::string const &name);
    Character(Character const &src);
	virtual ~Character();
    Character& operator=(const Character &rhs);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

