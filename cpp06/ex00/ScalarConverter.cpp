/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:16:13 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/12/19 18:51:57 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isNumeric(const std::string &str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!isdigit(str.at(i)))
			return (false);
	}
	return (true);
}

void IntConverter(const std::string &str)
{
	int num = atoi(str.c_str());

	if (isNumeric(str) == false)
		std::cout << "Esta mal" << std::endl;
	// mirar si es mas que max int
	else
		std::cout << "Printa el int :D" << std::endl;
}

void CharConverter(const std::string &str)
{
	int num = atoi(str.c_str());
	
	if (str.size() > 3)
		std::cout << "Esta mal" << std::endl;
	if (str.size() == 2 && isNumeric(str) == false)
		std::cout << "Esta mal" << std::endl;
	if (num > 255)
		std::cout << "Esta mal" << std::endl;
	if (num < 32 || num = 255)
		std::cout << "Not printable (pero no esta mal)" << std::endl;
	if (num >= 32 && num <= 254)
		std::cout << "Printa el char :D" << std::endl;
}

void ScalarConverter::convert(const std::string &str)
{
	try
	{
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}