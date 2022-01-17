#include <iostream>
#include <string>
#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;
    
    if (argc != 2)
    {
        std::cout << "Invalid number of argument, Please try again." << std::endl;
        return 0;
    }
    karen.complain((std::string)argv[1]);
    return 0;
}