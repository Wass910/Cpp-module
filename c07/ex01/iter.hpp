#include <iostream>
#include <iomanip>
#include <string>

template <typename T>
void iter( T  const * Arr, int const size , void (*f)(T const &))
{
    int i = 0;
    if (size < 0)
    {
        std::cout << "Error with the size." << std::endl;
        return ;
    }
    while (i < size)
    {
        f(Arr[i]);
        i++;
    }
    return ;
}

template<typename T>
void f(T const & a)
{
    std::cout << a << std::endl;
    return ;
}