#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;

		MutantStack(void);
		MutantStack(const MutantStack<T>& source);
		MutantStack<T>&	operator=(const MutantStack<T>& source);
		~MutantStack(void);

		iterator	begin(void);
		iterator	end(void);
};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& source) : std::stack<T>(source) {}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& source)
{
	if (this != &source)
		std::stack<T>::operator=(source);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}
#endif
