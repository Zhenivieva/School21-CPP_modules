//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal &rhs);

    const std::string &getType() const;
    void makeSound() const;

};

