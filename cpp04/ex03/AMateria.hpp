/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:52:01 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 17:35:40 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
	/*	DEFAULT CONSTRUCTOR	*/
	AMateria();
	AMateria(std::string const & type);

	/*	COPY CONSTRUCTOR	*/
	AMateria(const AMateria &copy);
			
	/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
	AMateria& operator=(const AMateria &other);

	/*	GETTERS AND SETTERS	*/
	const std::string &getType(void) const;
	
	/*	METHODS	*/
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
	virtual ~AMateria();
};

#endif