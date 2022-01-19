#include <iostream>
#include <string>
#include <cmath>

class Fixed{
public:

    Fixed( void );
    Fixed( int const value );
    Fixed( float const value );
    Fixed( Fixed const & src );
    ~Fixed( void );
    
    int getRawBits(void) const;
    void setRawBits(int const raw); 
    float toFloat(void) const;
    int toInt(void) const;
    Fixed & operator=( Fixed const & src );
    bool    operator>( Fixed const & src );
    bool     operator<( Fixed const & src );
    bool    operator>=( Fixed const & src );
    bool    operator<=( Fixed const & src );
    bool    operator==( Fixed const & src );
    bool    operator!=( Fixed const & src );
    Fixed  operator+( Fixed const & src );
    Fixed  operator-( Fixed const & src );
    Fixed  operator/( Fixed const & src );
    Fixed  operator*( Fixed const & src );
    Fixed   operator++( int test);
    Fixed & operator++( void );
    static const Fixed &	max( Fixed const & a, Fixed const & b );
    static const Fixed &	min( Fixed const & a, Fixed const & b );

private:
    int _value;
    static int	_nb_fractionnel;
};

std::ostream &  operator<<( std::ostream & o, Fixed const & i );