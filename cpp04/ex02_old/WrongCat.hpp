/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:10:31 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/03 17:46:55 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    	public:
		/*	DEFAULT CONSTRUCTOR	*/
		WrongCat();
		WrongCat(std::string type);

		/*	COPY CONSTRUCTOR	*/
		WrongCat(const WrongCat &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		WrongCat& operator=(const WrongCat &other);
		
		/*	MEMBER FUNCTIONS	*/
        void makeSound() const;
		/*	DESTRUCTOR	*/
		~WrongCat();	
};

#endif