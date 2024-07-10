/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:40:33 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/18 17:36:33 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl constructor called." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int	i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	i++;
	switch (i)
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			Harl::debug();
			std::cout << std::endl;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			Harl::info();
			std::cout << std::endl;
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			Harl::warning();
			std::cout << std::endl;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			Harl::error();
			std::cout << std::endl;
			break;				
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

Harl::~Harl()
{
	std::cout << "Harl destructor called." << std::endl;
}
