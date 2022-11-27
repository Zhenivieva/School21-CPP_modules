//
// Created by Marleen Maryjane on 1/15/22.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (src._materias[i])
            this->_materias[i] = src._materias[i]->clone();
        else
            this->_materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->_materias[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
        this->_materias[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        if (rhs._materias[i])
            this->_materias[i] = rhs._materias[i]->clone();
    }
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m->clone();
            delete m;
            return;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
            return this->_materias[i]->clone();
    }
    return NULL;
}

