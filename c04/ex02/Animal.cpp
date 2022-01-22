#include <iostream>
#include <string>
#include "Animal.hpp"

AAnimal::AAnimal( void)
{
    std::cout << "AAnimal default constructor is call." << std::endl;
    return ;
}

AAnimal::AAnimal( AAnimal const & src)
{
    *this = src;
    std::cout << "AAnimal copy constructor is call." << std::endl;
    return ;
}

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

