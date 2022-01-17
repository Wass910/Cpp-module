#include <iostream>
#include <string.h>
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    return ;
}

HumanB::~HumanB( void )
{
    return ;
}

void    HumanB::attack( void )
{
    std::cout << _name << " attacks with his " << _club->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon( Weapon club )
{
    _club = &club;
    return ;
}