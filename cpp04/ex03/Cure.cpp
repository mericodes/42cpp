/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:51:46 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/03 20:06:33 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Cure::Cure(const Cure &copy)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Cure& Cure::operator=(const Cure &other)
{
	// std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	MEMBER FUNCTIONS	*/
AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
};


/*	DESTRUCTOR	*/
Cure::~Cure()
{
	// std::cout << "Cure Destructor called" << std::endl;
}
