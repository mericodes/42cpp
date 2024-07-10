/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:25:48 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/12 20:06:18 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon constructor called." << std::endl;
}


const std::string	&Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(const std::string newType)
{
	_type = newType;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called." << std::endl;
}