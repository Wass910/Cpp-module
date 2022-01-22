#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    AAnimal *arr = new Dog();
    AAnimal *arr1 = new Cat();

    arr->makeSound();
    arr1->makeSound();
    delete arr;
    delete arr1;
    return 0;
}