#include <iostream>
#include <string>
#include "Cure.hpp"

Cure::Cure( void )
{
    this->_type = "cure";
    std::cout << "Cure default constructor is call." << std::endl;
    return ;
}

Cure::Cure( std::string const & type)
{
    this->_type = type;
    std::cout << "Cure Name constructor is call." << std::endl;
    return ;
}

Cure::Cure( Cure const & src)
{
    std::cout << "Cure copy constructor is call." << std::endl;
    *this = src;
    return ;
}

Cure::~Cure( void )
{
    std::cout << "Cure destructor is call." << std::endl;
    return ;
}

Cure & Cure::operator=( Cure const & src )
{
    (void)src;
    return *this;
}