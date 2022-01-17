#include <iostream>
#include <string>
#include "Karen.hpp"

Karen::Karen( void )
{
    return ;
}

Karen::~Karen( void )
{
    return ;
}

void Karen::debug( void )
{
    std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
    return ;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    return ;
}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
    return ;
}

void Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}

void Karen::complain( std::string level )
{
    int i = 0;
    Karen karen;
    void (Karen::*fonction_ptr[])(void ) = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };
    std::string test_level[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };
    
    while (i < 4)
    {
        if (level == test_level[i])
        {    
            (karen.*fonction_ptr[i])();
            return ;
        }
        i++;
    }
    std::cout << "Please enter a valid level, Karen wants to complain." << std::endl;
    return ;
}