#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include "Materia.hpp"

class AMateria;

class ICharacter{
    public:
        virtual ~ICharacter( void );
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
    public:
        Character( void );
        Character( std::string const & type );
        Character( Character const & src );
        ~Character();
        Character & operator=( Character const & src );
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
    private:
        std::string _type;
        AMateria * _inventoryType[4];
        AMateria * _unequip;
        int floor;
};

#endif