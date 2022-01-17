#include <iostream>
#include <string.h>
#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie randomZombie(name);
    randomZombie.Announce();
}