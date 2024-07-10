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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap mario("Mario");
	ScavTrap luigi("No name");

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
	mario.highFivesGuys();

	return (0);
}