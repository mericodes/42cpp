/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 08:53:42 by codespace         #+#    #+#             */
/*   Updated: 2025/01/23 07:41:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _arr(NULL), _size(0)
{
	// std::cout << "Array Default Constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size): _size(size)
{
	// std::cout << "Array Name Constructor called" << std::endl;
	if (_size)
		_arr = new T[_size];
}

template <typename T>
Array<T>::~Array()
{
	// std::cout << "Array Default destructor called" << std::endl;
	if (_arr && _size)
		delete [] _arr;
}

template <typename T>
Array<T>::Array(const Array<T> &other): _arr(NULL), _size(0)
{
	// std::cout << "Array Copy Constructor called" << std::endl;
	*this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &other) 
{
	// std::cout << "Array Copy Assignment Operator called" << std::endl;
	if (this == &other)
		return (*this);
	if (_arr && _size)
		delete [] _arr;
	_arr = NULL;
	_size = other._size;
	if (_size)
		_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const
{
	if (!_arr || !_size || _size != index)
		throw std::out_of_range("index is out of range");
	return (_arr[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}