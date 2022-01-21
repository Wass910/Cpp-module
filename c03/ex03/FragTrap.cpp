#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

FragTrap::FragTrap( void )
{
    this->_Hit = 100;
    std::cout << this->_Energy << std::endl;
    this->_Energy = 100;
    std::cout << this->_Energy << std::endl;
    this->_Attack = 30;
    std::cout << "FragTrap default constructor is call." << std::endl;
    return ;
}

FragTrap::FragTrap( std::string name ) 
{
    this->_name = name;
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Attack = 30;
    std::cout << "FragTrap Name constructor is call." << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src ) 
{
    std::cout << "FragTrap copy constructor is call." << std::endl;
    *this = src;
    return ;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap destructor is call." << std::endl;
    return ;
}

FragTrap & FragTrap::operator=( FragTrap const & src )
{
    std::cout << "Operator= is call" << std::endl;
	(void)src;
    return *this;
}

void    FragTrap::HighFivesGuys( void ) const
{
    std::cout << "FragTrap " << this->_name << " make a highe fives." << std::endl;
    return ;
}

void    FragTrap::attack( const std::string & target )
{
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    return ;
}