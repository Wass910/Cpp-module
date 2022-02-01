#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <algorithm>


class DontFind: public std::exception{
    public:
        virtual const char* what() const throw()            
        {
            return (" don't found in my list.");
        }
};

template<typename T>
void easyfind(T lst, int b)
{
    std::cout << "Element " << b;
    std::list<int>::const_iterator  it;
    it = std::find(lst.begin() , lst.end(), b);
    if (it != lst.end())
        std::cout << " found in my list." << std::endl;
    else 
        throw DontFind();
}