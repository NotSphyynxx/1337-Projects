#include <iostream>
#include <vector>
#include <algorithm>

class CapIsFull : std::exception {
    const char* what() const throw(); 
};

class Span {
    private:
    std::vector<double> depot;
    unsigned int N;
    public:
    Span();
    ~Span();
    Span(const Span &obj);
    Span(unsigned int num);
    Span &operator=(const Span &obj);

    void addNumber(unsigned int num);
    // int shortestSpan();
    // int longestSpan();
    // addMultiNumbers();
};