#include <iostream>
#include <string.h>
#include "Weapon.hpp"

Weapon::Weapon( std::string name )
{
    setType(name);
    return ;
}

Weapon::~Weapon( void )
{
    return ;
}

std::string&	   Weapon::getType( void )
{
	return _nameWeapon;
}

void	   Weapon::setType( std::string name )
{
    _nameWeapon = name;
}

std::string Weapon::_nameWeapon = "";