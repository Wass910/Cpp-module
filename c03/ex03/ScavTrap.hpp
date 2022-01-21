#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
    ScavTrap( void );
    ScavTrap( std::string name);
    ScavTrap( ScavTrap const & src );
    ~ScavTrap( void );
    
    int  getHit( void ) const;
    int  getEnergy( void ) const;
    int  getAttack( void ) const;
    void attack(const std::string & target);
    ScavTrap & operator=( ScavTrap const & src );
    void guardGate( void ) const;
};

#endif