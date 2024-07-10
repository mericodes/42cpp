/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:51:46 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 20:08:37 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*	DEFAULT CONSTRUCTOR	*/
AMateria::AMateria() : _type("Materia")
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	// std::cout << "AMateria name constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
AMateria::AMateria(const AMateria &copy)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
AMateria& AMateria::operator=(const AMateria &other)
{
	// std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

/*	GETTERS AND SETTERS	*/
const std::string &AMateria::getType(void) const
{
	return (_type);
}
		
/*	MEMBER FUNCTIONS	*/
void AMateria::use(ICharacter& target)
{
	std::cout << "* "<< target.getName() << " does something with the materia *" << std::endl;
}
/*	DESTRUCTOR	*/
AMateria::~AMateria()
{
	// std::cout << "AMateria Destructor called" << std::endl;
}
