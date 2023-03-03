#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include "iostream"
#include<iterator> // for iterators
#include<vector>
template <typename T>
int easyfind(T &a, int n)
{
    // int i;
    typename T::iterator siu = std::find(a.begin(), a.end(), n);
    // siu = std::find(a.begin(), a.end(), n);
    if (siu == a.end())
        throw std::exception();
    else
        return (*siu);
}

#endif