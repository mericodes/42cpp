/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:40:17 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/05/22 12:01:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Wrong number of parameters. Try ./harlFilter <level>" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}