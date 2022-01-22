#ifndef MATERIA_H
# define MATERIA_H

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria {
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria(void);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter & target) = 0;
};

class IMateriaSource
{
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif