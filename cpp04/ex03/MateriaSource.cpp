/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:41:53 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/10 20:14:40 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*	DEFAULT CONSTRUCTOR	*/
MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_materias[i] = NULL;
	}
}

/*	COPY CONSTRUCTOR	*/
MateriaSource::MateriaSource(const MateriaSource &copy)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}
	
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
// MateriaSource& MateriaSource::operator=(const MateriaSource &other)
// {
// 	std::cout << "MateriaSource copy assignment operator called" << std::endl;
// 	if (this != &other)
// 	{
// 		this._materias = other._materias;
// 	}
// 	return (*this);
// }

/*	METHODS	*/
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m->clone();
			delete m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (0);
}

void MateriaSource::printMaterias() const
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			std::cout << "Materia saved on slot " << i << " is from type " << this->_materias[i]->getType() << std::endl;
		else
			std::cout << "No materia saved on slot " << i << std::endl;
	}
	std::cout << std::endl;
}

/*	DESTRUCTOR	*/
MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}
