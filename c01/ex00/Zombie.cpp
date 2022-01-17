#include <iostream>
#include <string.h>
#include "Zombie.hpp"

Zombie::Zombie( std::string  name )
{
    _name = name;
}

Zombie::~Zombie( void )
{
    std::cout << _name << " is going to eat people in an other planet." << std::endl;
}

void	Zombie::Announce( void )
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
