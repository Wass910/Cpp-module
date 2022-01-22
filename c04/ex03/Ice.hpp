#ifndef ICE_H
# define ICE_H

#include <iostream>
#include <string>
#include "Materia.hpp"

class Ice : public AMateria {
    public:
        Ice( void );
        Ice( Ice const & src );
        Ice(std::string const & type);
        ~Ice( void );

        std::string const & getType() const; //Returns the materia type
        virtual Ice* clone() const = 0;
        virtual void use(ICharacter& target);
        Ice & operator=( Ice const & src );
};

#endif