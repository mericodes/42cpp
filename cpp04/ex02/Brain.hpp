/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:52:24 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/03 18:42:10 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
//# include <string>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Brain();
		Brain(std::string const &type);

		/*	COPY CONSTRUCTOR	*/
		Brain(const Brain &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Brain& operator=(const Brain &other);
		
		/*	GETTERS AND SETTERS	*/
		// const std::string &getIdeas(void) const;

		/*	DESTRUCTOR	*/
		~Brain();
};

#endif