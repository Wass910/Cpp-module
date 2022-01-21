#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal{
public:
    Animal( void );
    Animal( Animal const & src );
    ~Animal( void );
    
    std::string getType(void) const;
    virtual void makeSound( void ) const;
    Animal & operator=( Animal const & src );

protected:
    std::string _type;
};

#endif