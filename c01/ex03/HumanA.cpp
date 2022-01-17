#include <iostream>
#include <string.h>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& club) : _weapon(club)
{
    _name = name;
    return ;
}

HumanA::~HumanA( void )
{
    return ;
}

void    HumanA::attack( void )
{
    std::cout << _name << " attacks with his "  <<  _weapon.getType() << std::endl;
    return ;
}