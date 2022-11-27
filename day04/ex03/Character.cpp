//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Character.hpp"

Character::Character()
{
    _name = "Unknown";
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

Character::Character(std::string const &name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

Character::Character(Character const &src)
{
    _name = src.getName();
    for (int i = 0; i < 4; i++)
    {
        if (src._materias[i])
            this->_materias[i] = src._materias[i]->clone();
        else
            this->_materias[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->_materias[i];
}

Character &Character::operator=(const Character &rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
        this->_materias[i] = NULL;
    }
    this->_name = rhs._name;
    for (int i = 0; i < 4; i++)
    {
        if (rhs._materias[i])
            this->_materias[i] = rhs._materias[i]->clone();
    }
	return (*this);
}

std::string const &Character::getName() const {
   return (this->_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (m && this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
    {
        if (this->_materias[idx])
        {
            this->_materias[idx]->use(target);
            delete this->_materias[idx];
            this->_materias[idx] = NULL;
        }
    }
}
