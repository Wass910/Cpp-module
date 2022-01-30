#include <iostream>
#include <iomanip>
#include <string>

template<typename T>
T const & max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    else if (b > a)
        return (b);
    return (b);
}

template<typename T>
T const & min(const T& a, const T& b)
{
    if (a < b)
        return (a);
    else if (b < a)
        return (b);
    return (b);
}

template<typename T>
void swap( T& a,  T& b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}