/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:34:16 by codespace         #+#    #+#             */
/*   Updated: 2024/09/06 18:58:18 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private: 

	public:
		ScavTrap();
		ScavTrap(std::string name);

		ScavTrap(const ScavTrap &copy);
		ScavTrap& operator=(const ScavTrap &other);

		void attack(const std::string& target);
		void guardGate();
		
		~ScavTrap();
};


#endif