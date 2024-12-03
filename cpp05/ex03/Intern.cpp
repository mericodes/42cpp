/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:17:34 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/12/03 19:22:57 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	// std::cout << "Default Intern constructor" <<std::endl;
}

Intern::Intern(const Intern &copy)
{
	// std::cout << "Default Intern copy constructor" <<std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	// std::cout << "Default Intern copy assignment operator" <<std::endl;
}

Intern::~Intern()
{
	// std::cout << "Default Intern destructor" <<std::endl;
}

AForm *Intern::makeForm()
{
	
}