#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *arr = new Animal[9];

    for (int i = 0; i < 5; i++)
        arr[i] = Cat();
    for (int y = 5; y < 10; y++)
        arr[y] = Dog();
    delete [] arr;
    return 0;
}