
#include "Span.hpp"

int main(void)
{
    try{
        // span sp = span(55);
        span sp = span(56);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(20);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.addNumbers(1, 50);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

// complete the second addNumber function