#include <iostream>
#include <string.h>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("Epee");
    HumanA bob("Wass", club);
    bob.attack();
    club.setType("Hache");
    bob.attack();
    }
    {
    Weapon club = Weapon("Marteau");
    HumanB jim("Gildas");
    jim.setWeapon(club);
    jim.attack();
    club.setType("Baton");
    jim.attack();
    }
}