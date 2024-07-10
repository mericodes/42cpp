/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:52:01 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 20:02:57 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	
	public:
	/*	DEFAULT CONSTRUCTOR	*/
	Cure();

	/*	COPY CONSTRUCTOR	*/
	Cure(const Cure &copy);
			
	/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
	Cure& operator=(const Cure &other);

	/*	METHODS	*/
	AMateria* clone() const;
	void use(ICharacter& target);

	~Cure();
};

#endif