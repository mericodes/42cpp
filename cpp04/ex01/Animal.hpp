/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:25:06 by codespace         #+#    #+#             */
/*   Updated: 2024/05/29 20:08:53 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Animal();
		Animal(std::string const &type);

		/*	COPY CONSTRUCTOR	*/
		Animal(const Animal &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Animal& operator=(const Animal &other);
		
		/*	GETTERS AND SETTERS	*/
		const std::string &getType(void) const;

		/*	MEMBER FUNCTIONS	*/
		virtual void makeSound() const;

		/*	DESTRUCTOR	*/
		virtual ~Animal();	
};

#endif