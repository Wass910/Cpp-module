#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "-----------------------------" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    //------------------------------------------------------------
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::list<int>::iterator it3 = lst.end();
    it3--;
    std::cout << *it3 << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    it3 = lst.begin();
    std::list<int>::iterator ite3 = lst.end();
    ++it3;
    --it3;
    while (it3 != ite3)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }
    std::cout << "-----------------------------" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    //------------------------------------------------------------
    MutantStack<int> s(mstack);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    MutantStack<int>::iterator it2 = s.begin();
    MutantStack<int>::iterator ite2 = s.end();
    std::cout << s.top() << std::endl;
    std::cout << s.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::cout << "-----------------------------" << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
    std::cout << s.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;
    return (0);
}