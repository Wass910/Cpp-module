#include <iostream>
#include <string>
#include "Form.hpp"

AForm::AForm( void) : _name("default"), _gradeToExecute(150), _gradeToSign(150), _sign(false)
{
    std::cout << "AForm default constructor is call." << std::endl;
    return ;
}

AForm::AForm( std::string const & name, int const Tosign, int const Toexecute) : _name(name), _sign(false), _gradeToExecute(Toexecute), _gradeToSign(Tosign)
{
    if (Toexecute < 1 || Tosign < 1)
		throw GradeTooLowException();
	if (Toexecute > 150 || Tosign > 150)
		throw GradeTooHighException();
    std::cout << "AForm name constructor is call." << std::endl;
    return ;
}

AForm::AForm( AForm const & src) : _name(src.getName()), _sign(src.getSign()), _gradeToExecute(src.getGradeToExecute()), _gradeToSign(src.getGradeToSign())
{
    std::cout << "AForm copy constructor is call." << std::endl;
    return ;
}

std::string AForm::getName( void ) const
{
    return this->_name;
}

int AForm::getGradeToSign( void ) const
{
    return this->_gradeToSign;
}

int AForm::getGradeToExecute( void ) const
{
    return this->_gradeToExecute;
}

bool AForm::getSign( void ) const
{
    return this->_sign;
}

void AForm::beSigned( Bureaucrat const & src)
{
    if (src.getGrade() <= this->_gradeToSign)
        this->_sign = true;
    src.signForm(*this);
    return ;
}

AForm::~AForm( void )
{
    std::cout << "AForm destructor is call." << std::endl;
    return ;
}

AForm & AForm::operator=( AForm const & src )
{
    *this = src;
    return *this;
}

std::ostream & operator<<(std::ostream & o, AForm const & i)
{
    if (i.getSign() == true)
        o << i.getName() << " is signed.AForm grade to sign = " << i.getGradeToSign() << " and to execute : " << i.getGradeToExecute(); 
    else
        o << i.getName() << " isn't signed.AForm grade to sign = " << i.getGradeToSign() << " and to execute : " << i.getGradeToExecute(); 
    return o;
}
