/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:24:29 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 20:52:01 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		int _trash;
		AMateria *_inventory[4];
		AMateria **_floor;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Character();
		Character(std::string const & type);

		/*	COPY CONSTRUCTOR	*/
		Character(const Character &copy);
				
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Character& operator=(const Character &other);
		
		/*	GETERS AND SETERS	*/
		std::string const & getName() const;

		/*	METHODS	*/
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void addTrash(AMateria* trash);
		void printMaterias() const;
		void printFloor() const;
		
		~Character();
};

#endif