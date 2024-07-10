/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:08:46 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 20:02:37 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Ice();

		/*	COPY CONSTRUCTOR	*/
		Ice(const Ice &copy);
				
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Ice& operator=(const Ice &other);

		AMateria* clone() const;
		void use(ICharacter& target);

		~Ice();
};

#endif