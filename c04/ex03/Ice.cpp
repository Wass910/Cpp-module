#include <iostream>
#include <string>
#include "Ice.hpp"

Ice::Ice( void ) : _type("ice")
{
    std::cout << "Ice default constructor is call." << std::endl;
    return ;
}

Ice::Ice( Ice const & src)
{
    std::cout << "Ice copy constructor is call." << std::endl;
    *this = src;
    return ;
}

Ice::Ice( std::string const & type) : _type(type)
{
    std::cout << "Ice Name constructor is call." << std::endl;
    return ;
}

Ice::~Ice( void )
{
    std::cout << "Ice destructor is call." << std::endl;
    return ;
}

Ice & Ice::operator=( Ice const & src )
{
    (void)src;
    return *this;
}