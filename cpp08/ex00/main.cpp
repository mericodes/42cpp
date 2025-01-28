/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 08:44:03 by codespace         #+#    #+#             */
/*   Updated: 2025/01/23 15:54:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::list<int> cont;
	cont.push_back(0);
	cont.push_back(1);
	cont.push_back(2);
	cont.push_back(3);
	cont.push_back(3);
	cont.push_back(5);
	cont.push_back(6);
	
	try
	{
		std::cout << easyfind(cont, 24) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
		try
	{
		std::cout << "Ocurrence: 6	Index of the ocurrence: " << easyfind(cont, 6) << std::endl;
		std::cout << "Ocurrence: 3	Index of the ocurrence: " << easyfind(cont, 3) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}