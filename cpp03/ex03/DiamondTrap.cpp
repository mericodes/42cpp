/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:59:53 by codespace         #+#    #+#             */
/*   Updated: 2024/05/30 15:00:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::_name = "Noname";
	ClapTrap::setName(_name + "_clap_name");
	_hitPoints = 100;
	_attackDmg = 30;
	_energyPoints = 50;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
	DiamondTrap::_name = name;
	ClapTrap::setName(name + "_clap_name");
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
		_name = other.getName();
        ClapTrap::_name = other.ClapTrap::getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDmg = other.getAttackDamage();
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My own name is: " << _name << ", my ClapTrap's name is: " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}