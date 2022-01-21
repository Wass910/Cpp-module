#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap{
public:
    ClapTrap( void );
    ClapTrap( std::string name);
    ClapTrap( ClapTrap const & src );
    ~ClapTrap( void );
    
    int  getHit( void ) const;
    int  getEnergy( void ) const;
    int  getAttack( void ) const;
    void setHit(int const raw);
    void setEnergy(int const raw);
    void setAttack(int const raw);
    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap & operator=( ClapTrap const & src );

protected:
    std::string _name;
    int _Hit;
    int _Energy;
    int _Attack;
};

#endif