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
    //std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const & src ) 
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed( int const value )
{
    _value = value << _nb_fractionnel;
    //std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed( float const value ) 
{
    _value = roundf(value * power_to_shift(this->_nb_fractionnel));
    //std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::~Fixed( void )
{
    //std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=( Fixed const & src )
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->_value = src.getRawBits();
    return *this;
}

bool  Fixed::operator==( Fixed const & src )
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this->_value == src._value)
        return true;
    return false;
}

bool  Fixed::operator>=( Fixed const & src )
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this->_value >= src._value)
        return true;
    return false;
}

bool  Fixed::operator<=( Fixed const & src )
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this->_value <= src._value)
        return true;
    return false;
}

bool  Fixed::operator>( Fixed const & src )
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this->_value > src._value)
        return true;
    return false;
}

bool    Fixed::operator<( Fixed const & src )
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this->_value < src._value)
        return true;
    return false;
}

bool Fixed::operator!=( Fixed const & src )
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this->_value == src._value)
        return false;
    return true;
}

Fixed  Fixed::operator+( Fixed const & src )
{
    Fixed temp;
    //std::cout << "Assignation operator called" << std::endl;
    temp._value = this->_value + src._value; 
    return temp;
}

Fixed  Fixed::operator++( int test)
{
    //std::cout << "Assignation operator called" << std::endl;
    Fixed  temp = *this;
    test++;
    ++*this;
    return temp;
}

Fixed & Fixed::operator++( void )
{
    //std::cout << "Assignation operator called" << std::endl;
    this->_value ++;
    return *this;
}

Fixed  Fixed::operator-( Fixed const & src )
{
    Fixed temp;
    //std::cout << "Assignation operator called" << std::endl;
    temp._value = this->_value - src._value; 
    return temp;
}

Fixed  Fixed::operator/( Fixed const & src )
{
    Fixed temp;
    temp._value = (float)this->_value / src._value * power_to_shift(this->_nb_fractionnel) ;
  //temp._value = temp._value << _nb_fractionnel;
    return temp;
}

Fixed  Fixed::operator*( Fixed const & src )
{
    Fixed temp;
    //std::cout << "Assignation operator called" << std::endl;
    temp._value= (float)this->_value * src._value / power_to_shift(this->_nb_fractionnel); 
    return temp ;
}

const Fixed &  Fixed::max(Fixed const & a, Fixed const & b) 
{
    if (a._value > b._value)
        return a;
    return b;
}

const Fixed &  Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a._value < b._value)
        return a;
    return b;
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
    
    o << i.toFloat();
    return o;
}

int		Fixed::_nb_fractionnel = 8;