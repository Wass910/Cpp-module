#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void)
{
    std::cout << "Bureaucrat default constructor is call." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat( std::string const & name, int level) : _name(name)
{
    if (level < 1)
		throw GradeTooLowException();
	else if (level > 150)
		throw GradeTooHighException();
	else
		this->_grade = level;
    std::cout << "Bureaucrat copy constructor is call." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src) : _name(src.getName())
{
    this->_grade = src._grade;
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


void    Bureaucrat::signForm( Form & src ) 
{
    src.beSigned(*this);
    if (src.getSign() == true)
        std::cout << this->getName() << " signs " << src.getName() <<std::endl;
    else 
        std::cout << this->getName() <<  "cannot sign " << src.getName() << " because he don't have the necessary grade." << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat destructor is call." << std::endl;
    return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) 
{
    this->_grade = src._grade;
    if (this->_name != src.getName())
        *this = src;
    return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
    o << i.getName() << " , bureaucrat grade " << i.getGrade(); 
    return o;
}

