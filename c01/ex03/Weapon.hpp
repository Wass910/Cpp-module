#ifndef WEAPON_H
# define WEAPON_H

class Weapon {
public:
	Weapon( std::string name);
    Weapon( void );
	~Weapon( void );

    std::string& getType( void );
    void  setType( std::string name);
private:
    static std::string	_nameWeapon;
};


#endif