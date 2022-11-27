//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>

class Brain
{
protected:
	std::string _ideas[100];

public:
    Brain();
    Brain(const std::string &type);
    Brain(Brain const &src);
	virtual ~Brain();
    Brain& operator=(const Brain &rhs);

    std::string getIdea(int i);
    void setIdea( int i, std::string idea);

};

