/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:08:35 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 20:02:20 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Ice::Ice(const Ice &copy)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Ice& Ice::operator=(const Ice &other)
{
	// std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}

/*	GETTERS AND SETTERS	*/
		
/*	MEMBER FUNCTIONS	*/
AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
};

/*	DESTRUCTOR	*/
Ice::~Ice()
{
	// std::cout << "Ice Destructor called" << std::endl;
}
