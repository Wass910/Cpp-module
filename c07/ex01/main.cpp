#include <iostream>
#include <iomanip>
#include <string>
#include "iter.hpp"

template<typename T>
void const f(T const & a)
{
    std::cout << a << std::endl;
    return ;
}

int main( void ) 
{
    int const Arr[5] = {0, 1, 2, 3, 4};
    iter(Arr, 5, &f);
    char const Arr1[5] = {'a', 'b', 'c', 'd', 'e'};
    iter(Arr1, 5, &f);
    std::string const Arr2[5] = {"salut", "bonjour", "coucou", "didier", "engin"};
    iter(Arr2, 5, &f);
    return (0);
}