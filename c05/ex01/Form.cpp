#include <iostream>
#include <string>
#include "Form.hpp"

Form::Form( void) : _name("default"), _gradeToExecute(150), _gradeToSign(150), _sign(false)
{
    std::cout << "Form default constructor is call." << std::endl;
    return ;
}

Form::Form( std::string const & name, int const Tosign, int const Toexecute) : _name(name), _sign(false), _gradeToExecute(Toexecute), _gradeToSign(Tosign)
{
    if (Toexecute < 1 || Tosign < 1)
		throw GradeTooLowException();
	if (Toexecute > 150 || Tosign > 150)
		throw GradeTooHighException();
    std::cout << "Form name constructor is call." << std::endl;
    return ;
}

Form::Form( Form const & src) : _name(src.getName()), _sign(src.getSign()), _gradeToExecute(src.getGradeToExecute()), _gradeToSign(src.getGradeToSign())
{
    std::cout << "Form copy constructor is call." << std::endl;
    return ;
}

std::string Form::getName( void ) const
{
    return this->_name;
}

int Form::getGradeToSign( void ) const
{
    return this->_gradeToSign;
}

int Form::getGradeToExecute( void ) const
{
    return this->_gradeToExecute;
}

bool Form::getSign( void ) const
{
    return this->_sign;
}

void Form::beSigned( Bureaucrat const & src)
{
    if (src.getGrade() <= this->_gradeToSign)
        this->_sign = true;
    src.signForm(*this);
    return ;
}


Form::~Form( void )
{
    std::cout << "Form destructor is call." << std::endl;
    return ;
}

Form & Form::operator=( Form const & src ) 
{
    /* this->_name = src.getName();
    this->_sign = src.getSign();
    this->_gradeToExecute = src.getGradeToExecute();
    this->_gradeToSign = src.getGradeToSign(); */
    (void)src;
    return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & i)
{
    if (i.getSign() == true)
        o << i.getName() << " is signed.Form grade to sign = " << i.getGradeToSign() << " and to execute : " << i.getGradeToExecute(); 
    else
        o << i.getName() << " isn't signed.Form grade to sign = " << i.getGradeToSign() << " and to execute : " << i.getGradeToExecute(); 
    return o;
}

