#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>
#include <string>

class AAnimal{
public:
    
    virtual ~AAnimal( void );
    
    virtual void makeSound( void ) const = 0;
    AAnimal & operator=( AAnimal const & src );
protected:
    std::string _type;
};

#endif