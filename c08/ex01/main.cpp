#include "Span.hpp"

int main()
{
    Span test(9);
    std::vector<int> test_iter;

    int longest;
    int shortest;
    test_iter.push_back(10);
    test_iter.push_back(11);
    test_iter.push_back(30);
    test_iter.push_back(40);
    test_iter.push_back(50);
    test_iter.push_back(60);
    test_iter.push_back(70);
    test_iter.push_back(80);
    test_iter.push_back(90);
    try
    {
        test.addMoreNumber(10, 890);
        test.display();
        std::cout << "-----------------" << std::endl;
        test.iteratorRange(test_iter.begin(), test_iter.begin()+3);
        test.display();

        longest = test.longestSpan();
        shortest = test.shortestSpan();
        std::cout << "-----------------" << std::endl;
        std::cout << longest << std::endl;
        std::cout << "-----------------" << std::endl;
        std::cout << shortest << std::endl;
        std::cout << "-----------------" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}