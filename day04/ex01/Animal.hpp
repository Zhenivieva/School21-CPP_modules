//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(const std::string &type);
	Animal(Animal const &src);
	virtual ~Animal();
	Animal& operator=(const Animal &rhs);

    const std::string &getType() const;
    virtual void makeSound() const;

};

