/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:51:20 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 19:26:35 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
		std::cout << "Zombie name has been set to: " << zombie[i].getName() << std::endl;
	}
	return (zombie);
}