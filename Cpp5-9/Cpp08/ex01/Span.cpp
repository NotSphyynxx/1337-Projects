#include "Span.hpp"

const char* CapIsFull::what() const throw() {
    return "Array capacity is full !!";
}

Span::Span() : N(0) {

}

Span::~Span() {

}

Span::Span(const Span &obj) : N(obj.N), depot(obj.depot) {

}

Span::Span(unsigned int num) : N(num) {

}

Span &Span::operator=(const Span &obj) {
    if (this != &obj){
        N = obj.N;
        depot = obj.depot;
    }
    return *this;
}

void Span::addNumber(unsigned int num){
    // if (num > )
    if (depot.size() + 1 > N)
        throw CapIsFull();
    depot.push_back(num);
}