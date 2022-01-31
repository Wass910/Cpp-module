#include <iostream>
#include <string>
#include "Character.hpp"

Character::Character( void )
{
    std::cout << "Character default constructor is call." << std::endl;
    this->_inventoryType[0] = NULL;
    this->_inventoryType[1] = NULL;
    this->_inventoryType[2] = NULL;
    this->_inventoryType[3] = NULL;
    this->floor = 0;
    this->_unequip = NULL;
    return ;
}

Character::Character( std::string const & type ) : _type(type)
{
    
    this->_inventoryType[0] = NULL;
    this->_inventoryType[1] = NULL;
    this->_inventoryType[2] = NULL;
    this->_inventoryType[3] = NULL;
    this->floor = 0;
    this->_unequip = NULL;
    std::cout << "Character default constructor is call." << std::endl;
    return ;
}

Character::Character( Character const & src )
{
    std::cout << "Character default constructor is call." << std::endl;
    this->_inventoryType[0] = src._inventoryType[0];
    this->_inventoryType[1] = src._inventoryType[1];
    this->_inventoryType[2] = src._inventoryType[2];
    this->_inventoryType[3] = src._inventoryType[3];
    this->_type = src._type;
    this->floor = src.floor;
    this->_unequip = src._unequip;
    return ;
}

Character & Character::operator=( Character const & src )
{
    this->_inventoryType[0] = src._inventoryType[0];
    this->_inventoryType[1] = src._inventoryType[1];
    this->_inventoryType[2] = src._inventoryType[2];
    this->_inventoryType[3] = src._inventoryType[3];
    this->_type = src._type;
    return *this;
}

const   std::string & Character::getName( void ) const
{
    return this->_type;
} 

void Character::equip(AMateria* m)
{
    int i = 0;

    while (this->_inventoryType[i] && this->_inventoryType[i] != NULL)
        i++;
    if (i == 4)
    {
        std::cout << "Inventory is full." << std::endl;
        return;
    }
    this->_inventoryType[i] = m;
    return ;
}

void Character::unequip(int idx)
{
    if (idx > 3)
    {
        std::cout << "Index is too big." << std::endl;
        return ;
    }
    if (this->floor == 1)
    {
        std::cout << this->getName() << " Can't drop, object already on the floor." << std::endl;
        return ;
    }
    this->_unequip = this->_inventoryType[idx];
    this->floor = 1;
    return ;
}

void Character::use(int idx, ICharacter & target)
{
    if (idx > 3)
    {
        std::cout << "Index is too big." << std::endl;
        return ;
    }
    this->_inventoryType[idx]->use(target);
    return ;
}

Character::~Character( void )
{
    int i = 0;

    while (i < 4)
    {
        if (this->_inventoryType[i] != NULL)
            delete this->_inventoryType[i];
        i++;
    }
    if (this->_unequip != NULL)
        delete this->_unequip;
    std::cout << "Character destructor is call." << std::endl;
    return ;
}

ICharacter::~ICharacter( void )
{
    std::cout << "ICharacter destructor is call." << std::endl;
    return ;
}

