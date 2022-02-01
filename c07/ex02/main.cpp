#include <iostream>
#include <iomanip>
#include <string>
#include "Array.hpp"

int main( void ) 
{
    try
    {
        Array<char> testouille;
        Array<char> test(10);
        test[1] = 93;
        test[3] = 53;
        test[5] = 33;
        test[7] = 32;
        Array<char> test2(test);
        for(int i = 0; i < 10; i++)
            std::cout << test[i] << "    " << test2[i] << std::endl;
        std::cout << "--------------------------" << std::endl;
        for(int i = 0; i < 10; i++)
            std::cout << test[i] << "    " << test2[i] << std::endl;
        test2[7] = 8;
        std::cout << "--------------------------" << std::endl;
        for(int i = 0; i < 10; i++)
            std::cout << test[i] << "    " << test2[i] << std::endl;
        testouille = test2;
        std::cout << "--------------------------" << std::endl;
            for(int i = 0; i < 10; i++)
            std::cout << test2[i] << "    " << testouille[i] << std::endl;
        test2[10] = 19;
            std::cout << "--------------------------" << std::endl;
            for(int i = 0; i < 10; i++)
            std::cout << test2[i] << "    " << testouille[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}