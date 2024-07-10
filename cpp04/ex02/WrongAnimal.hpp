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

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		WrongAnimal();
		WrongAnimal(std::string const &type);

		/*	COPY CONSTRUCTOR	*/
		WrongAnimal(const WrongAnimal &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		WrongAnimal& operator=(const WrongAnimal &other);
		
		/*	GETTERS AND SETTERS	*/
		const std::string &getType(void) const;

		/*	MEMBER FUNCTIONS	*/
		void makeSound() const;

		/*	DESTRUCTOR	*/
		~WrongAnimal();	
};

#endif