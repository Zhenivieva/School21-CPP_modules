//
// Created by Marleen Maryjane on 1/15/22.
//

#include "Identify.hpp"
#include <iostream>

Base * generate(void)
{
    int n = std::rand() % 3 + 1;
    switch (n)
    {
        case 1:
            return (new A());
        case 2:
            return (new B());
        case 3:
            return (new C());
    }
    return NULL;
}

void identify(Base* p)
{
    if (p == NULL)
        return;
    A *ptrA = dynamic_cast<A*>(p);
    B *ptrB = dynamic_cast<B*>(p);
    C *ptrC = dynamic_cast<C*>(p);
    if (ptrA)
        std::cout << "A" << std::endl;
    else if (ptrB)
        std::cout << "B" << std::endl;
    else if (ptrC)
        std::cout << "C" << std::endl;
    else
        std::cout << "The class is not identified" << std::endl;
}

void identify(Base& p)
{
   if ((void *) &p == NULL)
       return;
    try
    {
        A &refA = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception&)
    {
        try
        {
            B &refB = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (const std::exception&)
        {
            try
            {
                C &refC = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch (const std::exception&)
            {
                std::cout << "The class is not identified" << std::endl;
            }
        }
    }
}

int main()
{
    Base* arClasses[4];

    for (int i = 0; i < 4 ; i++)
        arClasses[i] = generate();
    std::cout << "identify with a pointer:" << std::endl;
    for (int i = 0 ; i < 4; i++)
        identify(arClasses[i]);
    std::cout << "identify with a reference:" << std::endl;
    for (int i = 0 ; i < 4; i++)
        identify(*arClasses[i]);
    for (int i = 0 ; i < 4; i++)
        delete arClasses[i];
    return 0;
}
