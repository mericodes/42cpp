/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:10:23 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/09/19 14:26:55 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	_brain = new Brain();
}

/*	COPY CONSTRUCTOR	*/
Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
		
/*	MEMBER FUNCTIONS	*/
void Cat::makeSound() const
{
	std::cout << "    *    MEOW MEOW    *    " << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (_brain);
}

void	Cat::printBrainIdea(int index) const
{
	if (_brain)
		_brain->printIdea(index);
	else
		std::cout << "This dog doesn't have a brain" << std::endl;
}

/*	DESTRUCTOR	*/
Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor called" << std::endl;
}