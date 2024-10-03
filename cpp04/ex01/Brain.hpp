/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:52:24 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/09/19 14:18:58 by mlopez-i         ###   ########.fr       */
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

		/*	COPY CONSTRUCTOR	*/
		Brain(const Brain &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Brain& operator=(const Brain &other);
		
		/*	GETTERS AND SETTERS	*/
		void	setIdeas(std::string const idea, int index);
		void	printIdea(int index) const;

		/*	DESTRUCTOR	*/
		~Brain();
};

#endif