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
        
        virtual Ice* clone() const;
        virtual void use(ICharacter& target);
        Ice & operator=( Ice const & src );
};

#endif