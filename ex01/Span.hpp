#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
class span
{
    private :
        unsigned int length;
        unsigned int N;
        std::vector<int> tab;
    public :
        span();
        ~span();
        span(const span& e);
        span(unsigned int N);
        span	&operator=(const span &rhs);
        void addNumber(int number);
        void addNumbers(int first, int last);
        int shortestSpan();
        int longestSpan();
        unsigned int getlength() const;
};


#endif