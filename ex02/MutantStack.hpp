


#ifndef MUTANTABOMINATION_HPP
#define MUTANTABOMINATION_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        typedef T value_type;
        typedef typename std::deque<T>::size_type size_type;
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        MutantStack() : std::stack<T>()
        {}
        MutantStack(const MutantStack &s)
        : std::stack<T>(s.c){
        }
        ~MutantStack()
        {}
        MutantStack	&operator=(MutantStack &rhs)
        {
            if (this != &rhs)
            {
                this->c = rhs.c;
            }
        }
        // bool empty() const
        // {
        //     return (this->c.empty());
        // }
        // void pop() 
        // {
        //     this->c.pop_front();
        // }

        // void push(const T &a) 
        // {
        //     this->c.push_front(a);
        // }

        // size_t size() 
        // {
        //     return (this->c.size());
        // }
        // value_type& top()
        // {
        //     return (this->c.front());
        // }
        // const value_type& top() const
        // {
        //     return (this->c.front());
        // }
        iterator begin()
        {
            return (this->c.begin());
        }
        const_iterator begin() const
        {
            return (this->c.begin());
        }
        iterator rbegin()
        {
            return (this->c.rbegin());
        }
        const_iterator rbegin() const
        {
            return (this->c.rbegin());
        }
        iterator end()
        {
            return (this->c.end());
        }
        const_iterator end() const
        {
            return (this->c.end());
        }
        iterator rend()
        {
            return (this->c.rend());
        }
        const_iterator rend() const
        {
            return (this->c.rend());
        }
    // explicit stack (const container_type& ctnr = container_type());
        // push(int )
};


#endif