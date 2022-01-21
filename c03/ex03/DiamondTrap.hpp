#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :   public ScavTrap,   public FragTrap {
public:
    DiamondTrap( void );
    DiamondTrap( std::string name);
    DiamondTrap( DiamondTrap const & src );
    ~DiamondTrap( void );
    
    void attack(const std::string & target);
    int  getHit( void ) const;
    int  getEnergy( void ) const;
    int  getAttack( void ) const;
    DiamondTrap & operator=( DiamondTrap const & src );
    void whoAmI( void ) const;

private:
    std::string _name;
};

#endif