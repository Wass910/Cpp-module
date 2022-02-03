#ifndef HUMANB_H
# define HUMANB_H
#include "Weapon.hpp"

class HumanB {
public:
    HumanB( void );
	HumanB( std::string name);
	~HumanB( void );

    void	attack( void );
    void    setWeapon(Weapon club);

private:
    Weapon*     _club;
	std::string _name;
};


#endif