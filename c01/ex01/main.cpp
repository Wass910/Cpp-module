#include <iostream>
#include <string.h>
#include "Zombie.hpp"

int main()
{
    Zombie* Zombie = zombieHorde(5, "Foo");

    delete [] Zombie;
    return 0;
}