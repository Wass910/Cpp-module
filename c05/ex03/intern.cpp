#include <iostream>
#include <string>
#include "intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
    std::cout << "Intern default constructor is call." << std::endl;
    return ;
}

Intern::Intern( Intern const & src )
{
    std::cout << "Intern copy constructor is call." << std::endl;
    return ;
}

AForm * Intern::makeForm( std::string FormName, std::string target)
{
    if(target == "")
        throw AForm::NoTarget();
    std::string to_find = " robotomy request presidential pardon shrubbery creation ";
    int found = 0;
    found = to_find.find(FormName);
    switch (found)
    {
        case 1:
            std::cout << std::endl << "Intern creates " << FormName << std::endl << std::endl;
            return (new RobotomyRequestForm(target));
        case 18:
            std::cout << std::endl << "Intern creates " << FormName << std::endl << std::endl;
            return (new PresidentialPardonForm(target));
        case 38:
            std::cout << std::endl << "Intern creates " << FormName << std::endl << std::endl;
            return (new ShrubberyCreationForm(target));
        default:
            std::cout << "Intern can't find this Form" << std::endl;
            break;
    }
    return NULL;
}

Intern::~Intern( void )
{
    std::cout << "Intern destructor is call." << std::endl;
    return ;
}

Intern & Intern::operator=( Intern const & src )
{
    *this = src;
    return *this;
}


