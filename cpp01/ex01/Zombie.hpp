/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:46:54 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 19:39:17 by mlopez-i         ###   ########.fr       */
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

		void	announce();
		void	setName(const std::string &name);
		const std::string &getName() const;
	
		~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);

#endif