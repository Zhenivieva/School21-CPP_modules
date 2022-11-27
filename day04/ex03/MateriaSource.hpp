//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _materias[4];

public:
    MateriaSource();
    MateriaSource(MateriaSource const &src);
	virtual ~MateriaSource();
    MateriaSource& operator=(const MateriaSource &rhs);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

