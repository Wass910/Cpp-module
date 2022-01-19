#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"


int power_to_shift( int fract)
{
    int power = 2;
    int i = 1;

    while (i < fract ) 
    {
        power = power * 2;
        i++;
    }
    return power;
}
Fixed::Fixed( void ) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const & src ) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed( int const value )
{
    _value = value << _nb_fractionnel;
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed( float const value ) 
{
    _value = roundf(value * power_to_shift(this->_nb_fractionnel));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=( Fixed const & src )
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->_value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return (_value);
}

void    Fixed::setRawBits( int const raw ) 
{
    _value = raw;
    return;
}

int Fixed::toInt(void) const
{
    return (_value >> _nb_fractionnel);
}

float   Fixed::toFloat(void) const
{
    return ((float)_value / power_to_shift(this->_nb_fractionnel));
}

std::ostream &  operator<<( std::ostream & o, Fixed const & i)
{
    
    o << "the value of _value is : " << i.toFloat();
    return o;
}

int		Fixed::_nb_fractionnel = 8;