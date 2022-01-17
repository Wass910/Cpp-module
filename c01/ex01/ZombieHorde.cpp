#include <iostream>
#include <string.h>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* allZombie = new Zombie[N];
    int i = 0;

    while (i < N)
    {
        allZombie[i].Announce(name);
        i++;
    }

    return allZombie;
}