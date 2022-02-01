#include "easyfind.hpp"

int main()
{
    std::list<int> test;

    test.push_back(1);
    test.push_back(3);
    test.push_back(5);
    test.push_back(2);
    test.push_back(9);
    test.push_back(6);
    test.push_back(61);
    test.push_back(36);
    test.push_back(98);
    test.push_back(0);
    std::cout << "---------------------" << std::endl;
    try
    { 
        easyfind(test, 18);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try
    { 
        easyfind(test, 9);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try
    { 
        easyfind(test, 5);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try
    { 
        easyfind(test, 180);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try
    { 
        easyfind(test, 4);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    try
    { 
        easyfind(test, 0);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    return 0;
}