/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:10:31 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/06/05 21:34:44 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Cat();
		Cat(std::string type);

		/*	COPY CONSTRUCTOR	*/
		Cat(const Cat &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Cat& operator=(const Cat &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		/*	DESTRUCTOR	*/
		~Cat();	
};

#endif