#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>

class Span{
    public:
        Span( void );
        Span( unsigned int n);
        ~Span( void );
        
        class NotEnoughValue : public std::exception{
            public:
                virtual const char* what() const throw() 
                {
                    return ("Not enough value in the store.");
                }
        };

        class TooMuchValue : public std::exception{
            public:
                virtual const char* what() const throw() 
                {
                    return ("Too much value in the store.");
                }
        };

        void addNumber(int const i);
        void addMoreNumber(unsigned int const number_of_value, unsigned int max_value);
        int shortestSpan( void ) const;
        int longestSpan( void ) const;
        void display( void ) const;
        void    iteratorRange(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
        Span & operator=( Span const & src );

    private:
        std::vector<int> _vec;
        unsigned int _max;
};