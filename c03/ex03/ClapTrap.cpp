#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _Hit(10), _Energy(10), _Attack(0)
{
    std::cout << "ClapTrap default constructor is call." << std::endl;
    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _Hit(10), _Energy(10), _Attack(0)
{
    std::cout << "ClapTrap Name constructor is call." << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) : _Hit(10), _Energy(10), _Attack(0)
{
    std::cout << "ClapTrap copy constructor is call." << std::endl;
    *this = src;
    return ;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap destructor is call." << std::endl;
    return ;
}

void    ClapTrap::attack( const std::string & target)
{
    if (this->_Energy == 0 || this->_Hit <= 0)
    {    
        std::cout << "ClapTrap " << this->_name << " can't do anything now." << std::endl;
        return ;
    }
    this->_Energy--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    return;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (this->_Energy == 0 || this->_Hit <= 0)
    {    
        std::cout << "ClapTrap " << this->_name << " can't do anything now." << std::endl;
        return ;
    }
    this->_Hit += amount; 
    this->_Energy--;
    std::cout << "ClapTrap " << this->_name << " recover " << amount << " life point" << std::endl;
    return;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_Hit <= 0)
    {    
        std::cout << "ClapTrap " << this->_name << " can't do anything now." << std::endl;
        return ;
    }
    this->_Hit -= amount;
    std::cout << "ClapTrap " << this->_name << " take " << amount << " damage" << std::endl;
    return;
}

int ClapTrap::getAttack( void ) const
{
    return this->_Attack;
}

int ClapTrap::getHit( void ) const
{
    return this->_Hit;
}

int ClapTrap::getEnergy( void ) const
{
    return this->_Energy;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src )
{
    std::cout << "Pperator= is call" << std::endl;
	(void)src;
    return *this;
}