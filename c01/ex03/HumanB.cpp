#include <iostream>
#include <string.h>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _club(NULL)
{
    _name = name;
    return ;
}

HumanB::HumanB( void ) : _club(NULL), _name("default")
{
    return ;
}

HumanB::~HumanB( void )
{
    return ;
}

void    HumanB::attack( void )
{
    if (this->_club == NULL)
        std::cout << _name << " doesn't have weapon." << std::endl;
    else    
        std::cout << _name << " attacks with his " << _club->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon( Weapon club )
{
    _club = &club;
    return ;
}