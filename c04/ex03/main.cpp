#include <iostream>
#include <string>
#include "Materia.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);
    std::cout << "Bob 0 materia type : " << tmp->getType() << std::endl;
    AMateria *mat = new Ice();
    std::cout << "Ice materia type : " << mat->getType() << std::endl;
    mat->use(*moi);
    std::cout << "Ice materia type : " << mat->getType() << std::endl;
    mat->use(*moi);
    std::cout << "Ice materia type : " << mat->getType() << std::endl;
    delete bob;
    delete moi;
    delete src;
    delete mat;
    return 0;
} 