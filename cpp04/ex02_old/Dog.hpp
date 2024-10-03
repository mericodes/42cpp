/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:56 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/03 18:55:22 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
    public:
		/*	DEFAULT CONSTRUCTOR	*/
		Dog();
		Dog(std::string type);

		/*	COPY CONSTRUCTOR	*/
		Dog(const Dog &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Dog& operator=(const Dog &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		/*	DESTRUCTOR	*/
		~Dog();	
};

#endif