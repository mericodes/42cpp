/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:10:29 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 17:55:28 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

std::string Contact::GetFirstName(Contact *contact)
{
	if (!contact->firstName.empty())
		return (contact->firstName);
	return ("");
}

std::string Contact::GetLastName(Contact *contact)
{
	if (!contact->lastName.empty())
		return (contact->lastName);
	return ("");
}
std::string Contact::GetNickName(Contact *contact)
{
	if (!contact->nickname.empty())
		return (contact->nickname);
	return ("");
}

std::string Contact::GetPhoneNumber(Contact *contact)
{
	if (!contact->phoneNumber.empty())
		return (contact->phoneNumber);
	return ("");
}

std::string Contact::GetDarkestSecret(Contact *contact)
{
	if (!contact->darkestSecret.empty())
		return (contact->darkestSecret);
	return ("");
}

std::string	Contact::FillContact(std::string printstr)
{
	std::string input;
	
	std::cout << printstr << std::endl;
	while (input.length() < 1)
	{
		if (!std::getline(std::cin, input))
		{
			std::cout << "EOF." << std::endl;
			exit(0);
		}
	}
	return (input);
}

bool Contact::OnlyDigits(std::string str)
{
	for (int i = 0; str[i]; ++i)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

std::string	Contact::FillPhone(std::string printstr)
{
	std::string input;
	
	std::cout << printstr << std::endl;
	while (input.length() < 1)
	{
		if (!std::getline(std::cin, input))
		{
			std::cout << "EOF." << std::endl;
			exit(0);
		}
		if (!OnlyDigits(input))
		{
			std::cout << "Please write only digits." << std::endl;
			input.clear();
		}
	}
	return (input);
}

void	Contact::NewContact(Contact *contact)
{
	std::cout << "Please fill the information as asked below:" << std::endl;
	contact->firstName = FillContact("First Name: ");
	contact->lastName = FillContact("Last Name: ");
	contact->nickname = FillContact("Nickname: ");
	contact->phoneNumber = FillPhone("Phone Number: ");
	contact->darkestSecret = FillContact("Darkest Secret: ");
	std::cout << contact->firstName << " " << contact->lastName << " " << contact->nickname << " " << contact->phoneNumber << " "<< contact->darkestSecret << std::endl;
}

Contact::~Contact()
{
	
}
