/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:40 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 17:55:33 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Contact
{
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;
	public:
		Contact();
		/*	GETTERS	*/
		std::string	GetFirstName(Contact *contact);
		std::string	GetLastName(Contact *contact);
		std::string	GetNickName(Contact *contact);
		std::string	GetPhoneNumber(Contact *contact);
		std::string	GetDarkestSecret(Contact *contact);
		/*	METHODS	*/
		std::string	FillContact(std::string printstr);
		bool		OnlyDigits(std::string str);
		std::string	FillPhone(std::string printstr);
		void		NewContact(Contact *contact);
		
		~Contact();
};

#endif