#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <exception>

class notFoundExecption : public std::exception {
    public:
    const char* what() const throw();
};

template <typename T> typename T::iterator easyfind(T& container, int num){
    typename T::iterator it = std::find(container.begin(), container.end(), num);
    if (it == container.end()){
        throw notFoundExecption();
    }
    return (it);
}



#endif