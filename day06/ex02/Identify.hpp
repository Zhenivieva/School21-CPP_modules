//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>
#include <cstdlib>
#include "Base.hpp"

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

