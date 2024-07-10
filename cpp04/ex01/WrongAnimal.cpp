/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:24:57 by codespace         #+#    #+#             */
/*   Updated: 2024/07/03 17:47:31 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*	DEFAULT CONSTRUCTOR	*/
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
	std::cout << "WrongAnimal name constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	GETTERS AND SETTERS	*/
const std::string &WrongAnimal::getType(void) const
{
	return (_type);
}
		
/*	MEMBER FUNCTIONS	*/
void WrongAnimal::makeSound() const
{
	std::cout << "    *    WRONG UNKNOWN SOUND...    *    " << std::endl;
}
/*	DESTRUCTOR	*/
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}