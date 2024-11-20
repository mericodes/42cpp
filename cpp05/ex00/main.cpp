/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:17:32 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/11/20 19:45:13 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	/*	Try/Catch for the GradeTooHigh exception	*/
	try
	{
		Bureaucrat marta("Marta", 0);
		std::cout << "You should not see this printed!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception:" << e.what() <<'\n';
	}
	std::cout << "-------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat alberto("Alberto", 1);
		std::cout << alberto << std::endl;
		alberto.decrementGrade();
		std::cout << "Decremented grade to " << alberto << std::endl;
		alberto.incrementGrade();
		std::cout << "Incremented grade to " << alberto << std::endl;
		alberto.incrementGrade();
		std::cout << "You should not see this printed!" << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception:" << e.what() <<'\n';
	}
	std::cout << "-------------------------------------------------" << std::endl;
	/*	Try/Catch for the GradeTooLow exception	*/
	try
	{
		Bureaucrat marta("Marta", 151);
		std::cout << "You should not see this printed!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception:" << e.what() <<'\n';
	}
	std::cout << "-------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat alberto("Alberto", 150);
		std::cout << alberto << std::endl;
		alberto.incrementGrade();
		std::cout << "Incremented grade to " << alberto << std::endl;
		alberto.decrementGrade();
		std::cout << "Decremented grade to " << alberto << std::endl;
		alberto.decrementGrade();
		std::cout << "You should not see this printed!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception:" << e.what() << '\n';
	}
	return (0);
}