#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void)
{
    std::cout << "Bureaucrat default constructor is call." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat( std::string const & name, int level)
{

    this->_name = name;
    if (level < 1)
		throw GradeTooLowException();
	else if (level > 150)
		throw GradeTooHighException();
	else
		this->_grade = level;
    std::cout << "Bureaucrat copy constructor is call." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src)
{
    this->_grade = src._grade;
    this->_name = src._name;
    std::cout << "Bureaucrat copy constructor is call." << std::endl;
    return ;
}

std::string Bureaucrat::getName( void ) const
{
    return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
    return this->_grade;
}

void    Bureaucrat::increment( void )
{
    if (this->_grade == 1)
        throw GradeTooLowException();
    this->_grade--;
    return ;
}

void    Bureaucrat::decrement( void )
{
    if (this->_grade == 150)
        throw GradeTooLowException();
    this->_grade++;
    return ;
}


void    Bureaucrat::signForm( Form  const & src ) const
{
    if (src.getSign() == true)
        std::cout << this->getName() << " signs " << src.getName() <<std::endl;
    else if (this->getGrade() > src.getGradeToSign())
        std::cout << this->getName() << " cannot sign because his grade is too low." <<std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat destructor is call." << std::endl;
    return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & src )
{
    this->_grade = src._grade;
    this->_name = src._name;
    return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
    o << i.getName() << " , bureaucrat grade " << i.getGrade(); 
    return o;
}

