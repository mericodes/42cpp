/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:41:44 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 19:20:56 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		MateriaSource();	

		/*	COPY CONSTRUCTOR	*/
		MateriaSource(const MateriaSource &copy);
			
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		// MateriaSource& operator=(const MateriaSource &other);

		/*	METHODS	*/
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		void printMaterias() const;
		
		~MateriaSource();
};

#endif