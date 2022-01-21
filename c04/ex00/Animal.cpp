#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal( void)
{
    std::cout << "Animal default constructor is call." << std::endl;
    return ;
}

Animal::Animal( Animal const & src)
{
    *this = src;
    std::cout << "Animal copy constructor is call." << std::endl;
    return ;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor is call." << std::endl;
    return ;
}

Animal & Animal::operator=( Animal const & src )
{
    (void)src;
    return *this;
}

std::string  Animal::getType( void ) const
{
    return this->_type;
}

void  Animal::makeSound( void ) const
{
    std::cout << "Animal don't make noise." << std::endl;
    return ;
}