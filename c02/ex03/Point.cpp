#include <iostream>
#include <string>
#include <cmath>
#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
    return ;
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y)
{
        return ;
}

Point::Point( Fixed const & src1, Fixed const & src2 ) : _x(src1), _y(src2)
{
    return ;
}

Point::~Point( void )
{
    return ;
}

Fixed Point::getPointX( void ) const
{
    return (this->_x);
}

Fixed Point::getPointY( void ) const
{
    return (this->_y);
}

Point  Point::operator=( Point const & src ) const
{
    (void)src;
    return *this;
}

/* std::ostream &  operator<<( std::ostream & o, Point const & i)
{
    //o << i.toFloat();
    return o;
} */