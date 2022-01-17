#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
public:
	Zombie( std::string  name );
	~Zombie( void );

    void	Announce( void );

private:
	std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif