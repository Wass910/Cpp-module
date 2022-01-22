#include <iostream>
#include <string>
#include "Character.hpp"

ICharacter::ICharacter( void) 
{
    std::cout << "ICharacter default constructor is call." << std::endl;
    return ;
}

ICharacter::ICharacter( ICharacter const & src)
{
    std::cout << "ICharacter copy constructor is call." << std::endl;
    *this = src;
    return ;
}

ICharacter::~ICharacter( void )
{
    std::cout << "ICharacter destructor is call." << std::endl;
    return ;
}

ICharacter & ICharacter::operator=( ICharacter const & src )
{
    (void)src;
    return *this;
}
