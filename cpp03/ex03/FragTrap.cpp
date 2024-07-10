/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:34:22 by codespace         #+#    #+#             */
/*   Updated: 2024/05/30 14:58:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_name = "No name";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDmg = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDmg = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDmg = copy.getAttackDamage();
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDmg = other.getAttackDamage();
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "FragTrap " <<  _name << " can't attack, because they have no energy left." << std::endl;
	else if (_hitPoints < 1)
		std::cout << _name << " can't attack, because they have no hit points left." << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDmg << " damage." << std::endl;
		_energyPoints--;
		std::cout << "FragTrap " <<  _name << " has " << _energyPoints << " energy points left." << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " wants to request a positive highfive." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

/*
Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (100)
• Attack damage (30)

*/