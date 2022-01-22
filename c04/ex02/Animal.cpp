#include <iostream>
#include <string>
#include "Animal.hpp"

AAnimal::~AAnimal( void )
{
    std::cout << "AAnimal destructor is call." << std::endl;
    return ;
} 

AAnimal & AAnimal::operator=( AAnimal const & src )
{
    (void)src;
    return *this;
}

