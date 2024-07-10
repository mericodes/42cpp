/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:52:17 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/03 18:53:49 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

/*	COPY CONSTRUCTOR	*/
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	 for(int i = 0; i<100; i++)
        _ideas[i] = other._ideas[i];
    return(*this);
}
		
/*	GETTERS AND SETTERS	*/
// const std::string  &Brain::getIdeas(void) const
// {
// 	return ideas;
// }

/*	DESTRUCTOR	*/
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}