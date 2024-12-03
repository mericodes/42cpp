/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:51:45 by codespace         #+#    #+#             */
/*   Updated: 2024/12/03 19:02:18 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "--- TEST 1: SHRUBBERY CREATION FORM ---" << std::endl;
	ShrubberyCreationForm	S("Shrubby");
	S.beExecuted();
	std::cout << "File created! The file should be called S.name_shrubbery" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	
	std::cout << "--- TEST 2: ROBOTOMY REQUEST FORM ---" << std::endl;
	RobotomyRequestForm R("Roby");
	R.beExecuted();
	R.beExecuted();
	R.beExecuted();
	R.beExecuted();
	std::cout << "-----------------------------------------------------" << std::endl;
	
	std::cout << "--- TEST 3: PRESIDENTIAL PARDON FORM ---" << std::endl;
	PresidentialPardonForm P("Presi");
	P.beExecuted();
	std::cout << "-----------------------------------------------------" << std::endl;
	
	std::cout << "--- TEST 4: BUREAUCRAT FORM ---" << std::endl;
	try
	{
		Bureaucrat benny("Benny", 1);
		benny.executeForm(R);
		benny.signForm(R);
		benny.signForm(S);
		benny.signForm(P);
		
		benny.executeForm(S);
		benny.executeForm(P);
		benny.executeForm(R);
		
		Bureaucrat jonny("Jonny", 150);
		jonny.signForm(R);
		jonny.signForm(S);
		jonny.signForm(P);
		
		jonny.executeForm(S);
		jonny.executeForm(P);
		jonny.executeForm(R);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << "-----------------------------------------------------" << std::endl;
	return (0);
}