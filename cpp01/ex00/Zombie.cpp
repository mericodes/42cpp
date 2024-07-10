/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:12:58 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 19:21:35 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "No name";
	std::cout << "A zombie without name has been created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	if (!name.empty())
		_name = name;
	else
		_name = "No name";
	std::cout << "A zombie with name " << _name << " has been created" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << ": Got DestroiiiiiiiiidddD..." << std::endl;
}