//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "Animal.hpp"

class Cat : virtual public Animal
{

public:
    Cat();
    Cat(Cat const &src);
	~Cat();
    Cat& operator=(const Cat &rhs);

    virtual void makeSound() const;

};

