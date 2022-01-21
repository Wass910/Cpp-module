#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void)
{
    std::cout << "WrongAnimal default constructor is call." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
    *this = src;
    std::cout << "WrongAnimal copy constructor is call." << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor is call." << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src )
{
    (void)src;
    return *this;
}

std::string  WrongAnimal::getType( void ) const
{
    return this->_type;
}

void  WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal don't make noise." << std::endl;
    return ;
}