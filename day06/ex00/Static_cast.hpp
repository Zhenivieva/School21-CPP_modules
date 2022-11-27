//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>
#include <math.h>

class Static_cast
{
private:
    std::string _arg;
    double _value;

    Static_cast();
    void printChar();
    void printInt();
    void printDouble();
    void printFloat();

public:
    Static_cast(const std::string &arg);
    Static_cast(Static_cast const &src);
	virtual ~Static_cast();
	Static_cast& operator=(const Static_cast &rhs);

	void printValue();
};
