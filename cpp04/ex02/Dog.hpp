/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:56 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/09/19 14:26:07 by mlopez-i         ###   ########.fr       */
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

		/*	COPY CONSTRUCTOR	*/
		Dog(const Dog &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Dog& operator=(const Dog &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		Brain	*getBrain() const;
		void	printBrainIdea(int index) const;
		
		/*	DESTRUCTOR	*/
		~Dog();	
};

#endif