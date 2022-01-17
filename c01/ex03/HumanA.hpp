#ifndef HUMANA_H
# define HUMANA_H
#include "Weapon.hpp"

class HumanA {
public:
	HumanA( std::string name, Weapon& club);
	~HumanA( void );

    void	attack( void );

private:
    Weapon&  _weapon;
	std::string _name;
};


#endif