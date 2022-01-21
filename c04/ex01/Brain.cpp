#include <iostream>
#include <string>
#include "Brain.hpp"

Brain::Brain( void)
{
    std::cout << "Brain default constructor is call." << std::endl;
    return ;
}

Brain::Brain( Brain const & src)
{
    *this = src;
    std::cout << "Brain copy constructor is call." << std::endl;
    return ;
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor is call." << std::endl;
    return ;
}

Brain & Brain::operator=( Brain const & src )
{
    (void)src;
    return *this;
}

