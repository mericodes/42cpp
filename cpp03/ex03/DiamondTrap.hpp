/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:00:01 by codespace         #+#    #+#             */
/*   Updated: 2024/05/30 15:00:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
        
    public:
        DiamondTrap();
        DiamondTrap(std::string name);

        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap& operator=(const DiamondTrap &other);

        void whoAmI();

        ~DiamondTrap();
};

#endif