#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Attack = 20;
    std::cout << "ScavTrap default constructor is call." << std::endl;
    return ;
}

ScavTrap::ScavTrap( std::string name ) 
{
    this->_name = name;
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Attack = 20;
    std::cout << "ScavTrap Name constructor is call." << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) 
{
    std::cout << "ScavTrap copy constructor is call." << std::endl;
    *this = src;
    return ;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap destructor is call." << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src )
{
    std::cout << "Operator= is call" << std::endl;
	(void)src;
    return *this;
}

void    ScavTrap::guardGate( void ) const
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode" << std::endl;
    return ;
}

void    ScavTrap::attack( const std::string & target )
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    return ;
}

int ScavTrap::getAttack( void ) const
{
    return this->_Attack;
}

int ScavTrap::getHit( void ) const
{
    return this->_Hit;
}

int ScavTrap::getEnergy( void ) const
{
    return this->_Energy;
}