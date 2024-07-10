/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:09:41 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/18 17:22:26 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "stringVAR:                        "<< &stringVAR << std::endl;
	std::cout << "Memory address held by stringPTR: "<< stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: "<< &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "stringVAR:                        "<< stringVAR << std::endl;
	std::cout << "Value pointed by stringPTR:       "<< *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF:       "<< stringREF << std::endl;
	
	return (0);
}