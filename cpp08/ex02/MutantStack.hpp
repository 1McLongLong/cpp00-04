#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T> {
  public:
    MutantStack(void) {};
    MutantStack(const MutantStack &src) { *this = src; };
    MutantStack &operator=(const MutantStack &rhs) {
      if (this != &rhs)
        this->c = rhs.c;
      return *this;
    };
    ~MutantStack(void) {};

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); };
    iterator end() { return this->c.end(); };

    typedef typename std::stack<T>::container_type::const_iterator c_iterator;
    c_iterator cbegin() { return this->c.cbegin(); };
    c_iterator cend() { return this->c.cend(); };

    typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;
    r_iterator rbegin() { return this->c.rbegin(); };
    r_iterator rend() { return this->c.rend(); };

    typedef typename std::stack<T>::container_type::const_reverse_iterator cr_iterator;
    cr_iterator crbegin() { return this->c.crbegin(); };
    cr_iterator crend() { return this->c.crend(); };
};









#endif
