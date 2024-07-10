/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:43 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/05 21:40:01 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	MEMBER FUNCTIONS	*/
void Dog::makeSound() const
{
	std::cout << "    *    WOOF WOOF    *    " << std::endl;
}
/*	DESTRUCTOR	*/
Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}