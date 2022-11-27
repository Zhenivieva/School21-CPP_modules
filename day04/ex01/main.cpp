#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


#include <iostream>
#include <string>

int main()
{
    Animal* animals[10];
//    const Dog* i = new Dog();
//    const Cat* j = new Cat();

    for(int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for(int i = 0; i < 10; i++)
        delete animals[i];
    return (0);
}
