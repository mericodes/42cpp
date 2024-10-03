/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:24:57 by codespace         #+#    #+#             */
/*   Updated: 2024/09/19 14:39:32 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout << "Animal name constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	GETTERS AND SETTERS	*/
const std::string &Animal::getType(void) const
{
	return (_type);
}
		
/*	MEMBER FUNCTIONS	*/
void Animal::makeSound() const
{
	std::cout << "    *    UNKNOWN SOUND...    *    " << std::endl;
}

/*	DESTRUCTOR	*/
Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}