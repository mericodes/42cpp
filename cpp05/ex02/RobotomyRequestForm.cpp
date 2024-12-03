/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:29:19 by codespace         #+#    #+#             */
/*   Updated: 2024/12/03 18:31:51 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("Unknown target")
{
	// std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	// std::cout << "RobotomyRequestForm name constructor called" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other), _target(other._target)
{
//	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	// std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other.getTarget();
	}
	return (*this);
}


std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}


void	RobotomyRequestForm::beExecuted() const
{
	std::cout << "DRRRRRRRRRRRRRRRRRRRRRRRR" <<std::endl;
	int number = rand();
	if (number % 2 == 0)
		std::cout << "You've been lobotomized ˙◠˙" << std::endl;
	else
		std::cout << "Lobotomy failed! ˙ᵕ˙" << std::endl;
}



RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm destructor" << std::endl;
}
