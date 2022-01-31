#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void) : AForm("ShrubberyCreationForm", 145, 137), _target("")
{
    std::cout << "ShrubberyCreationForm default constructor is call." << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm name constructor is call." << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src) : AForm("ShrubberyCreationForm", 145, 137), _target(src._target)
{
    std::cout << "ShrubberyCreationForm copy constructor is call." << std::endl;
    return ;
}

std::string ShrubberyCreationForm::getTarget( void ) const
{
    return this->_target;
}

void    ShrubberyCreationForm::drawThree( void ) const
{
    std::string outfile = this->_target;
    outfile += "_shrubbery";
    std::ofstream ofs;
    ofs.open(outfile.c_str());
    if (!(ofs.is_open()))
        std::cout << "can't open the file." << std::endl;
    else
    {
        ofs << "                             # #### ####" <<			std::endl
            << "                           ### /#|### |/####" <<			std::endl
            << "                          ##'\'/#/ '\'||/##/_/##/_#" << 	std::endl
            << "                        ###  '\'/###|/ '\'/ # ###" <<		std::endl
            << "                      ##_'\'_#'\'_'\'## | #/###_/_####" <<	std::endl
            << "                     ## #### # '\' #| /  #### ##/##" <<		std::endl
            << "                      __#_--###`  |{,###---###-~" <<		std::endl
            << "                                '\' }{" << 					std::endl
            << "                                 }}{" <<					std::endl
            << "                                 }}{" <<					std::endl
            << "                                 {{}" <<					std::endl
            << "                           , -=-~{ .-^- _" <<				std::endl
            << "                                 `}" <<						std::endl
            << "                                  {"  <<					std::endl;
    }
    return ;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == false)
        throw Unsign();
    if (executor.getGrade() > this->getGradeToExecute())
        throw ExecuteFail();
    this->drawThree();
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    std::cout << "ShrubberyCreationForm destructor is call." << std::endl;
    return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
    (void)src;
    return *this;
}



