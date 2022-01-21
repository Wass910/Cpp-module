#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog( void );
    Dog( Dog const & src );
    ~Dog( void );
    
    std::string getType(void) const;
    virtual void makeSound( void ) const;
    Dog & operator=( Dog const & src );
};

#endif