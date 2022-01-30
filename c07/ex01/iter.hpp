#include <iostream>
#include <iomanip>
#include <string>

template <typename T>
void iter( T  const * Arr, int const size , void const (*f)(T const &))
{
    int i = 0;

    while (i < size)
    {
        f(Arr[i]);
        i++;
    }
}