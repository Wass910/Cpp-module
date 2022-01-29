#include "Empty.hpp"

Base* generate(void)
{
    int i;
    Base  *base;

    srand((unsigned)time(0)); 
    i = (rand()%3)+1;
    std::cout << i << std::endl;
    switch (i)
    {
        case 1:
            base = new A();
            break ;
        case 2:
            base = new B();
            break ;
        case 3:
            base = new C();
            break ;
        default :
            std::cout << "The rand function failed" << std::endl;
            return (NULL);
    }
    return (base);
}

void identify(Base * p)
{
    Base *base;

    base = dynamic_cast<A *>(p);
    if (base != NULL)
    {    
        std::cout << "From pointer : The instance is A" << std::endl;
        return ;
    }
    base = dynamic_cast<B *>(p);
    if (base != NULL)
    {    
        std::cout << "From pointer : The instance is B" << std::endl;
        return ;
    }
    base = dynamic_cast<C *>(p);
    if (base != NULL)
    {    
        std::cout << "From pointer : The instance is C" << std::endl;
        return ;
    }
    std::cout << "Allocation in pointer function failed" << std::endl;
    return ;
}

void identify( Base & p)
{
    try
    {
        Base & base = dynamic_cast<A &>(p);
        std::cout << "From Reference : The instance is A" << std::endl; 
    }
    catch(const std::exception& e)
    {
        try
        {
            Base & base = dynamic_cast<B &>(p);
            std::cout << "From Reference : The instance is B" << std::endl; 
        }
        catch(const std::exception& e)
        {
            try
            {
                Base & base = dynamic_cast<C &>(p);
                std::cout << "From Reference : The instance is C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        
    }
    
    return ;
}

int main()
{
    Base *base;
    base = generate();
    identify(base);
    identify(*base);
    return (0);
}