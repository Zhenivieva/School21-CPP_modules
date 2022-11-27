//
// Created by Marleen Maryjane on 1/15/22.
//

#pragma once

#include <iostream>

struct  Data
{
    std::string dName;
    int dNumber;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

