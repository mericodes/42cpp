/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 08:16:21 by codespace         #+#    #+#             */
/*   Updated: 2025/01/22 08:26:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int	main(void)
{
	int		arr[3] = {1, 2, 3};
	char	chr[2] = {'f', 'd'};
	double	dbr[4] = {0.1, 0.2, 0.3, 0.4};
	std::string	str[2] = {"hello ", "world"};
	char	*no = NULL;

	iter(arr, 3, printT);
	std::cout << std::endl;
	iter(chr, 2, printT);
	std::cout << std::endl;
	iter(dbr, 4, printT);
	std::cout << std::endl;
	iter(str, 2, printT);
	std::cout << std::endl;
	iter(no, 3, printT);
	
	return (0);
}