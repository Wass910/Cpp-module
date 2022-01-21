#include <iostream>
#include <string>
#include "Dog.hpp"

Dog::Dog( void)
{
    this->_type = "Dog";
    std::cout << "Dog default constructor is call." << std::endl;
    return ;
}

Dog::Dog( Dog const & src)
{
    *this = src;
    std::cout << "Dog copy constructor is call." << std::endl;
    return ;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor is call." << std::endl;
    return ;
}

Dog & Dog::operator=( Dog const & src )
{
    (void)src;
    return *this;
}

std::string  Dog::getType( void ) const
{
    return this->_type;
}

void  Dog::makeSound( void ) const
{
    std::cout << "Dog is Wafff" << std::endl;
    return ;
}