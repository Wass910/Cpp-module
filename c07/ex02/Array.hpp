#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array {
    public:
        Array( void ){
            this->_array = NULL;
            std::cout << "Array default constructor is call." << std::endl;
            return ;
        }
        Array( unsigned int n ){
            std::cout << "Array initialisation constructor is call." << std::endl;
            this->_array = new T [n];
            this->_lengh = n;
            unsigned int i = 0;
            while (i < n)
            {    
                this->_array[i] = 0;
                i++;
            }
            return ;
        }
        Array( Array const & src ){
            std::cout << "Array copy constructor is call." << std::endl;
            unsigned int i = 0;
            this->_array = new T [src._lengh];
            while (i < src._lengh)
            {
                this->_array[i] = src._array[i];
                i++;
            }
            this->_lengh = src.getLengh();
            return ;
        }
        ~Array(void){
            delete [] this->_array;
            return ;
        }
        
        class TooHigh : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return ("the value is too high.");
                }
        };

        T   getCaseArray( unsigned int n ) const{
            return this->_array[n];
        }
        
        unsigned int   getLengh( void ) const{
            return this->_lengh;
        }

        Array & operator=( Array const & src )
        {
            unsigned int i = 0;
            if (this->_array == NULL)
                this->_array = new T [src._lengh];
            while (i < src._lengh)
            {
                this->_array[i] = src._array[i];
                i++;
            }
            this->_lengh = src.getLengh();
            return *this;
        }

        T & operator[]( unsigned int i ) const
        {
            if (i > this->getLengh() - 1)
                throw TooHigh();
            return this->_array[i];
        }

        int size( void ){
            return this->getLengh();
        }
        
    private:
        T * _array;
        unsigned int _lengh;
};

#endif