/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:24:50 by codespace         #+#    #+#             */
/*   Updated: 2024/05/29 20:23:19 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap mario("Mario");
	ScavTrap luigi("Wrong name");
	FragTrap wario("WARIO");
	DiamondTrap waluigi;

	luigi.setName("Luigi");
	mario.setAttackDmg(5);
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());
	luigi.beRepaired(4);
	luigi.setAttackDmg(7);
	luigi.attack(mario.getName());
	mario.takeDamage(luigi.getAttackDamage());
	mario.attack(luigi.getName());
	luigi.takeDamage(mario.getAttackDamage());

	luigi.guardGate();
	wario.highFivesGuys();
	waluigi.whoAmI();
	return (0);
}