#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
    FragTrap( void );
    FragTrap( std::string name);
    FragTrap( FragTrap const & src );
    ~FragTrap( void );
    
    void attack(const std::string & target);
    FragTrap & operator=( FragTrap const & src );
    void HighFivesGuys( void ) const;
};

#endif