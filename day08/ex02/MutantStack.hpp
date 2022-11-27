//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>{
private:
public:
    MutantStack() {};
    MutantStack(const MutantStack &mutantStack) { *this = mutantStack; };
    MutantStack& operator=(const MutantStack &mutantStack) {
        this->c = mutantStack.c;
        return *this;
    };
    virtual ~MutantStack() {};

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(){ return this->c.begin(); };
    iterator end() { return this->c.end(); };
};
