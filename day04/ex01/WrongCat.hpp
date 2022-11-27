//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{

public:
    WrongCat();
    WrongCat(WrongCat const &src);
	~WrongCat();
    WrongCat& operator=(const WrongCat &rhs);

    void makeSound() const;

};

