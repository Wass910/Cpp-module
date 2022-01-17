#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
public:
	Zombie( void);
	~Zombie( void );

    void	Announce( std::string name );

private:
	std::string _name;
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif