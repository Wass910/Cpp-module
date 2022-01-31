#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Bureaucrat test1("wassim", 1);
        Bureaucrat test2("gildas", 150);
        Bureaucrat test3("adam", 100);
        Form    facture1("eau", 100, 25);
        Form    facture2("tel", 20, 10);
        std::cout << "--------------------" << std::endl;
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        test1.decrement();
        test2.increment();
        test3.increment();
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test3 << std::endl;
        std::cout << facture1 << std::endl;
        std::cout << facture2 << std::endl;
        facture1.beSigned(test1);
        facture1.beSigned(test3);
        facture1.beSigned(test2);
        facture2.beSigned(test2);
        facture2.beSigned(test3);
        facture2.beSigned(test1);
        Form    crash("dont good", 100, 0);
        std::cout << facture1 << std::endl;
        std::cout << facture2 << std::endl;
        std::cout << "--------------------" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "--------------------" << std::endl;
        std::cout << e.what() << std::endl;
    }
    return 0;
}