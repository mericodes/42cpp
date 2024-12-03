/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:29:19 by codespace         #+#    #+#             */
/*   Updated: 2024/12/03 18:31:51 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("Unknown target")
{
	// std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	// std::cout << "PresidentialPardonForm name constructor called" << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other), _target(other._target)
{
//	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	// std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other.getTarget();
	}
	return (*this);
}


std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
}


void	PresidentialPardonForm::beExecuted() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}



PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm destructor" << std::endl;
}
