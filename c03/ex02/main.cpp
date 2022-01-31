#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	ScavTrap robot("robot");
	robot.attack("dog");
	robot.guardGate();
	robot.beRepaired(8);
	FragTrap soldier("soldier");
	soldier.HighFivesGuys();
	soldier.attack("ennemyPng");
	soldier.attack("soldier");
	soldier.takeDamage(30);
	std::cout << "soldier hp: " << soldier.getHit() << std::endl;
	return 0;
}