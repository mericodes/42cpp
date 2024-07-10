/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:26:30 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/12 20:10:20 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "HumanB constructor called." << std::endl;
	if (!name.empty())
		_name = name;
	else
		_name = "No name";
	_weapon = NULL;
}
void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() <<std::endl;
	else
		std::cout << _name << " does not have a weapon!" <<std::endl;
}
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called." << std::endl;
}