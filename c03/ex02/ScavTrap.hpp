#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap( void );
    ScavTrap( std::string name);
    ScavTrap( ScavTrap const & src );
    ~ScavTrap( void );
    
    void attack(const std::string & target);
    ScavTrap & operator=( ScavTrap const & src );
    void guardGate( void ) const;
};

#endif