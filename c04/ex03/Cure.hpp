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

        std::string const & getType() const;
        virtual Cure* clone() const = 0;
        //virtual void use(ICharacter& target);
        Cure & operator=( Cure const & src );
};

#endif