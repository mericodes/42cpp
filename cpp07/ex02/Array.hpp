/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 08:34:33 by codespace         #+#    #+#             */
/*   Updated: 2025/01/22 08:56:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include "Array.tpp"

template <typename T>
class Array
{
	private:
		T 				*_arr;
		unsigned int	_size;
	public:
		Array();
		~Array();
		Array(unsigned int size);
		Array(const Array &other);
		Array& operator=(const Array &other);

		T& operator[](unsigned int index) const;
		unsigned int	size() const;
};

#endif