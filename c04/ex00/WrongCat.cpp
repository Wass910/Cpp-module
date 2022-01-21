#include <iostream>
#include <string>
#include "WrongCat.hpp"

WrongCat::WrongCat( void) 
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor is call." << std::endl;
    return ;
}

WrongCat::WrongCat( WrongCat const & src)
{
    *this = src;
    std::cout << "WrongCat copy constructor is call." << std::endl;
    return ;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor is call." << std::endl;
    return ;
}

WrongCat & WrongCat::operator=( WrongCat const & src )
{
    (void)src;
    return *this;
}

void  WrongCat::makeSound( void ) const
{
    std::cout << "WrongCat is Miaouuuu" << std::endl;
    return ;
}