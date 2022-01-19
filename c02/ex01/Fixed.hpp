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

private:
    int _value;
    static int	_nb_fractionnel;
};

std::ostream &  operator<<( std::ostream & o, Fixed const & i );