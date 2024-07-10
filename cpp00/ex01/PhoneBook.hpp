/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:25 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/07 17:55:40 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <sstream>

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
	public:
		PhoneBook();
		void	setIndex(int value);
		void	AddContact(Contact *contact);
		void	DisplayContacts(PhoneBook *phoneBook);
		void	SearchContact(PhoneBook *phoneBook);
		~PhoneBook();
};


#endif