//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{

private:
    Brain* _brain;
public:
    Dog();
    Dog(Dog const &src);
	~Dog();
    Dog& operator=(const Dog &rhs);

    virtual void makeSound() const;

};

