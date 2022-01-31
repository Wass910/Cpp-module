#include <iostream>
#include <string>
#include <stdlib.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void) : AForm("RobotomyRequestForm", 72, 45), _target("")
{
    std::cout << "RobotomyRequestForm default constructor is call." << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm name constructor is call." << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src) : AForm("RobotomyRequestForm", 72, 45), _target(src._target)
{
    std::cout << "RobotomyRequestForm copy constructor is call." << std::endl;
    return ;
}

std::string RobotomyRequestForm::getTarget( void ) const
{
    return this->_target;
}

void    RobotomyRequestForm::drillNoise( void ) const
{
    std::cout << "DRzzzzzzzzz DRzzzzzzzzz" << std::endl;
    int rdm_nb = std::rand() % 2;
    if ((rdm_nb % 2) == 0)
        std::cout << this->getTarget() << " Robotomization finish with succes." << std::endl;
    else
        std::cout << this->getTarget() << " Robotomization failure." << std::endl;
    return ;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == false)
        throw Unsign();
    if (executor.getGrade() > this->getGradeToExecute())
        throw ExecuteFail();
    this->drillNoise();
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm destructor is call." << std::endl;
    return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
    (void)src;
    return *this;
}



