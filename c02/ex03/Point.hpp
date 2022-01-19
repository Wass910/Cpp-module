#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point{
public:

    Point( void );
    Point( Point const & src );
    Point( Fixed const & src1, Fixed const & src2 );
    ~Point( void );

    Fixed getPointX(void) const;
    Fixed getPointY(void) const;
    //Fixed setRawBits(int const raw); 
    Point  operator=( Point const & src )const ;

private:
    Fixed const _y;
    Fixed const _x;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);