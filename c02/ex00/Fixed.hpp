#include <iostream>
#include <string>

class Fixed{
public:

    Fixed( void );
    Fixed( Fixed const & src );
    ~Fixed( void );
    
    int getRawBits(void) const;
    void setRawBits(int const raw); 
    Fixed & operator=( Fixed const & src );

private:
    int _value;
    static int	_nb_fractionnel;
};