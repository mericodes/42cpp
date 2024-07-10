/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:12:23 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/05/16 19:50:38 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;		
	public:
		Zombie();
		Zombie(std::string name);
		void	announce(void);
		~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif