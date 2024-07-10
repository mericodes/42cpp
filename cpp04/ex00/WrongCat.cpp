/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:10:23 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/03 17:47:14 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*	DEFAULT CONSTRUCTOR	*/
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
WrongCat& WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	MEMBER FUNCTIONS	*/
void WrongCat::makeSound() const
{
	std::cout << "    *    WRONG MEOW    *    " << std::endl;
}

/*	DESTRUCTOR	*/
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}