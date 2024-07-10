/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:25:06 by codespace         #+#    #+#             */
/*   Updated: 2024/05/30 14:35:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDmg;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		ClapTrap();
		ClapTrap(std::string name);

		/*	COPY CONSTRUCTOR	*/
		ClapTrap(const ClapTrap &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		ClapTrap& operator=(const ClapTrap &other);
		
		/*	GETTERS AND SETTERS	*/
		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;
		void setName(std::string name);
		void setHitPoints(unsigned int amount);
		void setEnergyPoints(unsigned int amount);
		void setAttackDmg(unsigned int amount);
		
		/*	MEMBER FUNCTIONS	*/
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/*	DESTRUCTOR	*/
		~ClapTrap();	
};

#endif