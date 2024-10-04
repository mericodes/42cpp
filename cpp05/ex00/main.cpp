/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:17:32 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/10/04 15:24:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	/*	Try/Catch for the GradeTooHigh exception	*/
	try
	{
		Bureaucrat alberto("Alberto", 1);
		std::cout << alberto << std::endl;
		alberto.decrementGrade();
		std::cout << alberto << std::endl;
		alberto.incrementGrade();
		alberto.incrementGrade();
		std::cout << "You should not see this printed!" << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception:" << e.what() <<'\n';
	}

	/*	Try/Catch for the GradeTooLow exception	*/
	try
	{
		Bureaucrat alberto("Alberto", 150);
		std::cout << alberto << std::endl;
		alberto.incrementGrade();
		std::cout << alberto << std::endl;
		alberto.decrementGrade();
		alberto.decrementGrade();
		std::cout << "You should not see this printed!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an exception:" << e.what() << '\n';
	}
	
	return (0);
}