//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _vect;

public:
    Span();
    Span(unsigned int n);
	virtual ~Span();
    Span (const Span &src);
	Span& operator=(const Span &rhs);

    void addNumber(unsigned int n);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
};

std::ostream &operator<<(std::ostream &o, Span const &rhs);