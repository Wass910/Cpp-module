#include "Span.hpp"

Span::Span( void ) : _max (0),_vec(0, 0)
{
    std::cout << "Constructor default is call." << std::endl;
    return ;
}

Span::Span( unsigned int n ) : _max(n)
{
    std::cout << "Constructor assignation is call." << std::endl;
    return ;
}

void    Span::addNumber( int const i )
{
    if (this->_vec.size() == this->_max)
        throw TooMuchValue();
    this->_vec.push_back(i);
    return ;
}

void    Span::display( void )const
{
    std::vector<int>::const_iterator it;

    for (it = this->_vec.begin(); it != this->_vec.end(); ++it)
        std::cout << *it << std::endl;
    return ;
}

void    Span::addMoreNumber( unsigned int const number_of_value, unsigned int max_value )
{
    unsigned int i = 0;

    while (i < number_of_value)
    {
        if (this->_vec.size() == this->_max)
            throw TooMuchValue();
        int rdm = std::rand() % max_value;
        this->addNumber(rdm);
        i++;
    }
    return ;
}

int Span::shortestSpan( void ) const
{
    int span;
    int i = 0;
    std::vector<int> temp = this->_vec;

    if (this->_vec.size() <= 1)
        throw NotEnoughValue();
    std::sort(temp.begin(), temp.end());
    std::vector<int>::const_iterator it = temp.begin();
    std::vector<int>::const_iterator ite = temp.begin() + 1;
    span = *ite - *it;
    while (i < this->_vec.size() - 1)
    {
        if ((*ite - *it) < span)
            span = *ite - *it;
        ite++;
        it++;
        i++;
    }
    return (span);
}

int Span::longestSpan( void ) const
{
    if (this->_vec.size() <= 1)
        throw NotEnoughValue();
    return (*std::max_element(this->_vec.begin(), this->_vec.end()) - *std::min_element(this->_vec.begin(), this->_vec.end()));
}

void Span::iteratorRange(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite)
{
    if ((ite - it) + this->_vec.size() > this->_max)
        throw TooMuchValue();
    this->_vec.insert(this->_vec.end(), it, ite);
    return ;
}
Span &Span::operator=(Span const &src)
{
    this->_vec = src._vec;
    return *this;
}

Span::~Span( void )
{
    std::cout << "Destructor is call." << std::endl;
    return ;
}