//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Static_cast.hpp"

Static_cast::Static_cast() : _arg(""), _value(0)
{
}
Static_cast::Static_cast(const std::string &arg): _arg(arg) {
    printValue();
}

Static_cast::Static_cast(Static_cast const &src)
{
	*this = src;
}

Static_cast::~Static_cast()
{
}

Static_cast &Static_cast::operator=(const Static_cast &rhs)
{
	_arg = rhs._arg;
    _value = rhs._value;
	return (*this);
}

void Static_cast::printValue() {
    int len = _arg.size();
    const char *argPtr = _arg.c_str();
    char *endPtr;
    _value = std::strtod(argPtr, &endPtr);
    if (argPtr == endPtr) {
        if (len > 1)
            throw std::runtime_error("Error: wrong argument");
    }
    printChar();
    printInt();
    printDouble();
    printFloat();
}

void Static_cast::printChar()
{
    std::cout << "char: ";
    if (fabs(_value) == INFINITY || isnan(_value))
        std::cout << "Impossible" << std::endl;
   else if (_value < 32 || _value > 126)
            std::cout << "non displayable" << std::endl;
   else
            std::cout << "'" << static_cast<char>(_value) << "'" << std::endl;
}

void Static_cast::printInt()
{
    std::cout << "int: ";
    if (_value >= INT32_MIN && _value <= INT32_MAX)
    {
        std::cout << static_cast<int>(_value) << std::endl;
        return;
    }
    else
        std::cout << "Impossible" << std::endl;
}

void Static_cast::printDouble()
{
    std::cout << "double: ";
    std::cout << _value;
    if (_value == static_cast<int>(_value))
        std::cout << ".0";
    std::cout << std::endl;
}

void Static_cast::printFloat()
{
    std::cout << "float: ";
    if (fabs(_value) != INFINITY && (_value < -MAXFLOAT || _value > MAXFLOAT)) {
        std::cout << "float overflow" << std::endl;
        return;
    }
    std::cout << static_cast<float>(_value);
    if (_value == static_cast<int>(_value))
        std::cout << ".0";
    std::cout << "f" << std::endl;
}



