#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

const char* notFoundExecption::what() const throw(){
    return ("value not found !!");
}

int main() {
    // ---------------------------------------------------------
    // TEST 1: Using std::vector
    // ---------------------------------------------------------
    std::cout << "=== Testing with std::vector ===" << std::endl;
    std::vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);

    try {
        // Success case
        std::cout << "Searching for 30..." << std::endl;
        std::vector<int>::iterator it1 = easyfind(myVector, 30);
        std::cout << "Success! Found value: " << *it1 << "\n" << std::endl;

        // Failure case
        std::cout << "Searching for 99..." << std::endl;
        std::vector<int>::iterator it2 = easyfind(myVector, 99);
        std::cout << "Found value: " << *it2 << std::endl; // This won't print
    } 
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << "\n" << std::endl;
    }
}