#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array
{
	protected:
			T	*array;
			unsigned int n;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array	&operator=(Array const &cpy);
		T	&operator[](unsigned int i);
		unsigned int	size();
		void	display(std::ostream &os)const;
};

template <class T>
Array<T>::Array()
{
	array = new T[0];
	n = 0;
}

template <class T>
Array<T>::Array(unsigned int l)
{
	T	*elem = new T();
	n = l;
	array = new T[n];
	for (unsigned int  i = 0; i < n; i++)
	{
		array[i] = *elem;
	}
	delete elem;
}

template <class T>
Array<T>::~Array()
{
	delete[] array;
}

template <class T>
Array<T>	&Array<T>::operator=(Array<T> const &cpy)
{
	if (array != NULL)
		delete[]	array;
	n = cpy.n;
	array = new T[n];
	for (unsigned int i = 0; i < n; i++)
	{
		array[i] = cpy.array[i];
	}
	return (*this);
}

template <class T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->n)
		throw std::exception();
	return (array[i]);
}

template <class T>
unsigned int	Array<T>::size()
{
	return (n);
}

template <class T>
void	Array<T>::display(std::ostream &os)const
{
	unsigned int i = 0; 
	if (n == 0)
		return ;
	while (i < n)
	{
		os << array[i] << " | ";
		i++;
	}
	if (i == n - 1)
		os << array[i];
}


template <class T>
std::ostream&	operator<<(std::ostream &os, Array<T>const& cl)
{
	cl.display(os);
	return os;
}

#endif