/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:34:16 by codespace         #+#    #+#             */
/*   Updated: 2024/05/30 14:58:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private: 

	public:
		FragTrap();
		FragTrap(std::string name);

		FragTrap(const FragTrap &copy);
		FragTrap& operator=(const FragTrap &other);

		void attack(const std::string& target);
		void highFivesGuys(void);
		
		~FragTrap();
};


#endif