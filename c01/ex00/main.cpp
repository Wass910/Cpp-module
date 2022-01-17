#include <iostream>
#include <string.h>
#include "Zombie.hpp"

int main()
{
    Zombie* Zombie = newZombie("Foo");
    randomChump("Bar");
    delete (Zombie);
    return 0;
}