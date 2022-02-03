#include <string>
#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <iterator>

template <typename T>
class MutantStack :  public std::stack<T>{
    public:
        MutantStack( void ) { return ;}
        MutantStack( MutantStack const & src ) : std::stack<T>(src) { return ;}
        ~MutantStack( void ){ return ;}

        MutantStack & operator=( MutantStack const & src ){
            this->c = src.c;
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator  iterator;

        iterator begin( void ) { return  this->c.begin() ;}
        iterator end( void ) { return  this->c.end() ;}
};
