/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:16 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 17:55:20 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

void	PhoneBook::setIndex(int value)
{
	index = value;
}

void	PhoneBook::AddContact(Contact *contact)
{
	if (!index || index == 8)
		index = 0;
	contact->NewContact(&contacts[index]);
	index++;
}

void	PhoneBook::DisplayContacts(PhoneBook *phoneBook)
{
	std::string	str;

	for (int i = 0; i < 8; i++)
	{
		str = phoneBook->contacts[i].GetFirstName(&phoneBook->contacts[i]);
		if (str.length() < 1)
			return ;
		std::cout << std::setw(10) << std::right << i << "| ";
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << str << "| ";
		str = phoneBook->contacts[i].GetLastName(&phoneBook->contacts[i]);
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << str << "| ";
		str = phoneBook->contacts[i].GetNickName(&phoneBook->contacts[i]);
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << str << std::endl;
	}
}

void	PhoneBook::SearchContact(PhoneBook *phoneBook)
{
	std::string input;
	int			index;
	
	std::cout << "Please write the index of the contact you want to see displayed." << std::endl;
	while (input.length() < 1)
	{
		if (!std::getline(std::cin, input))
		{
			std::cout << "EOF." << std::endl;
			exit(0);
		}
	}
	if (!isdigit(input[0]) || input.length() > 1)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	index = atoi(input.c_str());
	if (index < 0 || index > 7)
	{
		std::cout << "Invalid index range. Try a number between 0 and 7" << std::endl;
		return ;
	}
	input = phoneBook->contacts[index].GetFirstName(&phoneBook->contacts[index]);
	if (input.length() < 1)
	{
		std::cout << "No contact found in the specified index." << std::endl;
		return ;
	}
	std::cout << "First name: " << phoneBook->contacts[index].GetFirstName(&phoneBook->contacts[index]) << std::endl;
	std::cout << "Last name: " << phoneBook->contacts[index].GetLastName(&phoneBook->contacts[index]) << std::endl;
	std::cout << "Nickname: " << phoneBook->contacts[index].GetNickName(&phoneBook->contacts[index]) << std::endl;
	std::cout << "Phone Number: " << phoneBook->contacts[index].GetPhoneNumber(&phoneBook->contacts[index]) << std::endl;
	std::cout << "Darkest Secret: " << phoneBook->contacts[index].GetDarkestSecret(&phoneBook->contacts[index]) << std::endl;
}

PhoneBook::~PhoneBook()
{
	
}
