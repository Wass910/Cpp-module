#include <iostream>
#include <string>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap()
{
    this->_Energy = ScavTrap::_Energy;
    this->_Attack = FragTrap::_Attack;
    this->_Hit = FragTrap::_Hit;
    std::cout << "DiamondTrap default constructor is call." << std::endl;
    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    ClapTrap::_name = name + "_clap_trap_name";
    this->_Energy = ScavTrap::_Energy;
    this->_Attack = FragTrap::_Attack;
    this->_Hit = FragTrap::_Hit;
    std::cout << "DiamondTrap Name constructor is call." << std::endl;
    return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) 
{
    std::cout << "DiamondTrap copy constructor is call." << std::endl;
    *this = src;
    return ;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap destructor is call." << std::endl;
    return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & src )
{
    std::cout << "Operator= is call" << std::endl;
	(void)src;
    return *this;
}

void    DiamondTrap::attack( const std::string & target )
{
    std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    this->_Energy--;
    return ;
}

void    DiamondTrap::whoAmI( void ) const
{
    std::cout << "DiamondTrap name " << this->_name << " and ClapTrap name " << ClapTrap::_name << std::endl;
    return ;
}

int DiamondTrap::getAttack( void ) const
{
    return this->_Attack;
}

int DiamondTrap::getHit( void ) const
{
    return this->_Hit;
}

int DiamondTrap::getEnergy( void ) const
{
    return this->_Energy;
}