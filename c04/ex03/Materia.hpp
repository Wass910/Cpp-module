#ifndef MATERIA_H
# define MATERIA_H

#include <iostream>
#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string _type;
    public:
        AMateria( void ) {}
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

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const & src );
        ~MateriaSource( void );
        //MateriaSource(std::string const & type);

        //std::string const & getType() const;
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
        MateriaSource & operator=( MateriaSource const & src );
    private:
        AMateria* _materias[4];

};

#endif