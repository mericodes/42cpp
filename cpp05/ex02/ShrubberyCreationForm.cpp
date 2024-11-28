/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:29:19 by codespace         #+#    #+#             */
/*   Updated: 2024/11/28 18:12:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("Unknown target")
{
	// std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	// std::cout << "ShrubberyCreationForm name constructor called" << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other), _target(other._target)
{
//	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	// std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other.getTarget();
	}
	return (*this);
}


std::string ShrubberyCreationForm::getTarget() const
{
	return (_target);
}


void	ShrubberyCreationForm::beExecuted() const
{
	// std::ofstream	outfile(_target + "_shrubbery", std::ofstream::out);
	// if (!outfile.is_open())
	// 	std::cerr<< "Error: outfile tinky winky" << std::endl;
	// else
	// {
	// 	outfile <<	"       _-_\n"
	// 				"    /~~   ~~\\\n"
	// 				" /~~         ~~\\\n"
	// 				"{               }\n"
	// 				" \\  _-     -_  /\n"
	// 				"   ~  \\ //  ~\n"
	// 				"_- -   | | _- _\n"
	// 				"  _ -  | |   -_\n"
	// 				"      // \\"
	// 				<< std::endl;
	// 	outfile.close();
	// }
	std::ofstream ofs ("test.txt", std::ofstream::out);

	ofs << "lorem ipsum";

	ofs.close();
}



ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm destructor" << std::endl;
}
