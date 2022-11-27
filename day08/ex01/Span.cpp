//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &rhs)
{
    _n = rhs._n;
	_vect = rhs._vect;

	return (*this);
}


void Span::addNumber(unsigned int elem) {
    if (this->_vect.size() == this->_n)
        throw std::runtime_error("Error: Maximum amount of elements is already reached");
    this->_vect.push_back(elem);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (this->_vect.size() + (end - begin) > this->_n)
        throw std::runtime_error("Error: Maximum amount of elements is already reached");
    this->_vect.insert(this->_vect.end(), begin, end);
}

int Span::shortestSpan() {
    if (_vect.empty() || _vect.size() == 1)
        throw std::runtime_error("There is no spin to find");

    std::vector<int> v2(this->_vect);
    std::sort(v2.begin(), v2.end());
    std::reverse(v2.begin(), v2.end());
    for (unsigned long i = 0; i < _vect.size()-1; i++) {
        v2[i] = v2[i] - v2[i+1];
    }
    v2.erase(v2.end() - 1);
    return *(std::min_element(v2.begin(), v2.end()));
}

int Span::longestSpan() {
    if (_vect.empty() || _vect.size() == 1)
        throw std::runtime_error("There is no spin to find");

    return *(std::max_element(this->_vect.begin(), this->_vect.end()))
           - *(std::min_element(this->_vect.begin(), this->_vect.end()));
}
