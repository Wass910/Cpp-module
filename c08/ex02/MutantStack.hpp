#include <string>
#include <iostream>

template <typename T>
class MutantStack{
    public:
        MutantStack( void ) : _Array(NULL), _lengh(0)
        { 
            return ; 
        }
        ~MutantStack( void ){ return ;}

        void push(T  i)
        {
            this->_Array = new T;
            this->_Array[this->_lengh] = i;
            return ;
        }

    private:
        T * _Array;
        unsigned int _lengh;
};
