

#include "Span.hpp"

span::span()
{
    length = 0;
    N = 0;
}
span::~span()
{
}

span::span(const span& e)
{
    *this = e;
}
 
unsigned int span::getlength() const
{
    return (length);
}
span	&span::operator=(const span  &rhs) 
{
	this->length = rhs.getlength();
	return (*this);
}

span::span(unsigned int N)
{
    this->length = 0;
    this->N = N;
}

void span::addNumber(int number)
{
    if (length == N)
        throw std::exception();
    length++;
    tab.push_back(number);
    std::sort(tab.begin(), tab.end());
}

void span::addNumbers(int first, int last)
{
    if ((length + (last - first + 1)) > N)
        throw std::exception();
    int i = 0;
    while (i <= (last - first))
    {
        tab.push_back(first + i);
        length++;
        i++;
    }
    std::sort(tab.begin(), tab.end());
}

int span::shortestSpan()
{
    if (length < 2)
        throw std::exception();
    int nbr = tab[1] - tab[0];
    for(unsigned int i = 0; i < length - 1; i++)
    {
        if ((tab[i + 1] - tab[i])  < nbr)
            nbr = tab[i + 1] - tab[i];
    }
    return (nbr);
}

int span::longestSpan()
{
    if (length < 2)
        throw std::exception();
    int nbr = tab[length - 1] - tab[0];
    // for ( int i = 0; i < 100 ; i++)
    //     std::cout << "[" << tab[i] << "]";
    return (nbr);
}