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
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
    return ;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
    return ;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
    return ;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
    return ;
}

void Karen::complain( std::string level )
{
    Karen karen;
    void (Karen::*fonction_ptr[])(void ) = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };
    std::string to_compare = "DEBUG INFO WARNING ERROR";
    std::size_t found = to_compare.find(level);

    switch (found)
    {
        case 0:
            (karen.*fonction_ptr[0])();
        case 6:
            (karen.*fonction_ptr[1])();
        case 11:
            (karen.*fonction_ptr[2])();
        case 19:
            (karen.*fonction_ptr[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return ;
}