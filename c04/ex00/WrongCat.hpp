#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat( void );
    WrongCat( WrongCat const & src );
    ~WrongCat( void );
    
    std::string getType(void) const;
    void makeSound( void ) const;
    WrongCat & operator=( WrongCat const & src );
};

#endif