#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat( void );
    Cat( Cat const & src );
    ~Cat( void );
    
    std::string getType(void) const;
    virtual void makeSound( void ) const;
    Cat & operator=( Cat const & src );
};

#endif