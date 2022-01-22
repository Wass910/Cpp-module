#include <iostream>
#include <string>
#include "Dog.hpp"

Dog::Dog( void)
{
    this->_type = "Dog";
    std::cout << "Dog default constructor is call." << std::endl;
    this->_dogBrain = new Brain();
    return ;
}

Dog::Dog( Dog const & src)
{
    std::cout << "Dog copy constructor is call." << std::endl;
    *this = src;
    return ;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor is call." << std::endl;
    delete this->_dogBrain;
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