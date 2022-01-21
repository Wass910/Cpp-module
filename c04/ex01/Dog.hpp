#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
    Dog( void );
    Dog( Dog const & src );
    ~Dog( void );
    
    std::string getType(void) const;
    virtual void makeSound( void ) const;
    Dog & operator=( Dog const & src );
private:
    Brain* _dogBrain;
};

#endif