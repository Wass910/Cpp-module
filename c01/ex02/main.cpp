#include <iostream>
#include <string.h>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << "Adress in memory of str (using str): " << &str << std::endl;
    std::cout << "Adress in memory of str (using PTR): " << strPTR << std::endl;
    std::cout << "Adress in memory of str (using REF): " << &strREF << std::endl << std::endl;
    std::cout << "String using the PTR: " << *strPTR << std::endl;
    std::cout << "String using the REF: " << strREF << std::endl;
    return 0;
}