#ifndef CURE_H
# define CURE_H

#include <iostream>
#include <string>
#include "Materia.hpp"
#include "Character.hpp"

class Cure : public AMateria {
    public:
        Cure( void );
        Cure( Cure const & src );
        ~Cure( void );
        Cure(std::string const & type);

        virtual Cure* clone() const;
        virtual void use(ICharacter& target);
        Cure & operator=( Cure const & src );
};

#endif