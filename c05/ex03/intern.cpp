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
    (void)src;
    std::cout << "Intern copy constructor is call." << std::endl;
    return ;
}

AForm * Intern::makeForm( std::string FormName, std::string target)
{
    if(target == "")
        throw AForm::NoTarget();
    t_formList all[3];
	all[0].formName = "robotomy request";
	all[0].formType = new RobotomyRequestForm(target);
	all[1].formName = "presidential pardon";
	all[1].formType = new PresidentialPardonForm(target);
	all[2].formName = "shrubbery creation";
	all[2].formType = new ShrubberyCreationForm(target);
	int for_the_boucle = -1;
	for(int i = 0; i < 3; i++)
	{
		if (FormName == all[i].formName)
			for_the_boucle = i;
		else
			delete all[i].formType;
	} 
	if (for_the_boucle == -1)
	{	
		std::cout << "----------------------" << std::endl;
		std::cout << "This form doesn't exist, try again." <<std::endl;
		return (NULL);
	}
	return (all[for_the_boucle].formType);
}

Intern::~Intern( void )
{
    std::cout << "Intern destructor is call." << std::endl;
    return ;
}

Intern & Intern::operator=( Intern const & src )
{
    (void)src;
    return *this;
}
