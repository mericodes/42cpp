/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 08:17:01 by codespace         #+#    #+#             */
/*   Updated: 2025/01/22 08:31:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream> 

template <typename T>
void	iter(T arr[], unsigned int size, void (*func)(T &))
{
	if (!arr)
		return ;
	for (unsigned int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T>
void	printT(T &data)
{
	std::cout << data << " ";
}

#endif