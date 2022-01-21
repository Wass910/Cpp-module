#include "ClapTrap.hpp"

int main(void){
	ClapTrap joe("joe");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	joe.attack("sam");
	std::cout << "joe has " << joe.getEnergy() << " energyPoints remaining" << std::endl;
	joe.beRepaired(1);
	joe.attack("sam");
}