#include "ScavTrap.hpp"

int main(void){
	ScavTrap robot("robot");
	robot.attack("dog");
	robot.guardGate();
	robot.beRepaired(11);
	return 0;
}