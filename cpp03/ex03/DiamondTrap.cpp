/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:59:53 by codespace         #+#    #+#             */
/*   Updated: 2024/09/12 18:50:16 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::setName("Noname");
	_hitPoints = 100;
	_attackDmg = 30;
	_energyPoints = 50;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::setName(name);
	_hitPoints = 100;
	_attackDmg = 30;
	_energyPoints = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		DiamondTrap::setName(other.getName());
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDmg = other.getAttackDamage();
	}
	return (*this);
}

void DiamondTrap::setName(const std::string name)
{
	DiamondTrap::_name = name;
	ClapTrap::setName(_name + "_clap_name");
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My own name is: " << _name << ", my ClapTrap's name is: " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}