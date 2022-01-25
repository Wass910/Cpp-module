#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void) : AForm("PresidentialPardonForm", 25, 5), _target("")
{
    std::cout << "PresidentialPardonForm default constructor is call." << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm name constructor is call." << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src) : AForm("PresidentialPardonForm", 25, 5), _target(src._target)
{
    std::cout << "PresidentialPardonForm copy constructor is call." << std::endl;
    return ;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
    return this->_target;
}

void    PresidentialPardonForm::forgive( void ) const
{
    std::cout << this->getTarget() << " was forgiven by Zafod Beeblebrox." << std::endl;
    return ;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor)  const
{
    if (this->getSign() == false)
        throw Unsign();
    if (executor.getGrade() > this->getGradeToExecute())
        throw ExecuteFail();
    this->forgive();
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    std::cout << "PresidentialPardonForm destructor is call." << std::endl;
    return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
    (void)src;
    return *this;
}



