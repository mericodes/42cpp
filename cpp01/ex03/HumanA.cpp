/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:26:11 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/18 17:31:24 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	std::cout << "HumanA constructor called." << std::endl;
	if (!name.empty())
		_name = name;
	else
		_name = "No name";
	_weapon = &weapon;
}

void	HumanA::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() <<std::endl;
	else
		std::cout << _name << " attacks with their fists." <<std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called." << std::endl;
}