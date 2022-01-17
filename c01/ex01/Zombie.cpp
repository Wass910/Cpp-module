#include <iostream>
#include <string.h>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << _name << " is going to eat people in an other planet." << std::endl;
    return;
}

void	Zombie::Announce( std::string name )
{
    _name = name;
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}
