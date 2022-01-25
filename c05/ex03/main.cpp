#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "intern.hpp"

int	main(void)
{
	Bureaucrat		bob("bob", 1);
	Intern someRandomIntern;
	AForm* rrf;
	try{
		std::cout << "------------------------------"<< std::endl;
		rrf = someRandomIntern.makeForm("robotodmy request", "Bender");
		std::cout << "------------------------------"<< std::endl;
		delete rrf;
		std::cout << "------------------------------"<< std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "------------------------------"<< std::endl;
		delete rrf;
		std::cout << "------------------------------"<< std::endl;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << "------------------------------"<< std::endl;
		delete rrf;
		std::cout << "------------------------------"<< std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "test");
		rrf->beSigned(bob);
		rrf->execute(bob);
		std::cout << "------------------------------"<< std::endl;
		delete rrf;
		std::cout << "------------------------------"<< std::endl;
		rrf = someRandomIntern.makeForm("", "");
		std::cout << "------------------------------"<< std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "");
		std::cout << "------------------------------"<< std::endl;
		rrf->beSigned(bob);
		rrf->execute(bob);
	}
	catch(std::exception & e)
	{
		std::cout << "------------------------------"<< std::endl;
		std::cout << "errors during execution:"<< std::endl;
		std::cout << e.what() << std::endl;
		std::cout << "------------------------------"<< std::endl;
		//std::cout << std::endl;
		
	}
	return (0);
}