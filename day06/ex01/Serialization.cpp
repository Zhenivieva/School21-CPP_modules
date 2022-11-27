//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Serialization.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr)
{
    return  reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return  reinterpret_cast<Data*>(raw);
}

int main(int argc, char **argv)
{

    Data data;
    data.dName = "dataname";
    data.dNumber = 5;

    std::cout << "before serialization: " << data.dName << " " << data.dNumber << std::endl;

    uintptr_t uintObject = serialize(&data);
    std::cout << "after serialization: " << uintObject << std::endl;
    Data *deserializedData;
    deserializedData = deserialize(uintObject);
    std::cout << "after deserialization: " << deserializedData->dName << " " << deserializedData->dNumber << std::endl;

    return 0;
}



