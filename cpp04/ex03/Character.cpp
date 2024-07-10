/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:24:20 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 21:04:17 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Character::Character() : _name("Noname")
{
	// std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	_trash = 1;
	_floor = NULL;
	this->_floor = new AMateria*[_trash];
	this->_floor[0] = NULL;
}

Character::Character(std::string const & name) : _name(name)
{
	// std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	_trash = 1;
	_floor = NULL;
	this->_floor = new AMateria*[_trash];
	this->_floor[0] = NULL;
}

/*	COPY CONSTRUCTOR	*/
Character::Character(const Character &copy)
{
	// std::cout << "Character copy constructor called" << std::endl;
	std::cout << std::endl;
	_trash = 1;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_floor = new AMateria*[_trash];
	this->_floor[0] = NULL;
	*this = copy;
}
		
/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Character& Character::operator=(const Character &other)
{
	// std::cout << "Character copy assignment operator called" << std::endl;
	this->_name = other._name;
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i])
			delete _inventory[i];
	}
	for(int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;		
	}
	return (*this);
}

/*	GETTERS AND SETTERS	*/
const std::string &Character::getName(void) const
{
	return (_name);
}
		
/*	MEMBER FUNCTIONS	*/
void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Can't equip a NULL material..." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m->clone();
			delete m;
			std::cout << "Materia equiped on slot " << i << " with type: " << this->_inventory[i]->getType() << std::endl;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (_inventory[idx] == NULL || idx > 3 || idx < 0)
		return ;
	this->addTrash(this->_inventory[idx]);
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

void Character::addTrash(AMateria* trash)
{
	if (trash == NULL)
		return ;	
	this->_floor[_trash - 1] = trash;
	_trash += 1;
	AMateria **newTrash = new AMateria *[_trash];
	for (int i = 0; i < _trash - 1; i++)
	{
		newTrash[i] = this->_floor[i];
	}
	delete []_floor;
	newTrash[_trash - 1] = NULL;
	this->_floor = newTrash;
}

void Character::printMaterias() const
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			std::cout << "Materia equiped on slot " << i << " with type: " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout <<"Inventory is empty" << std::endl; 
	}
	std::cout << std::endl;
}

void Character::printFloor() const
{
	for (int i = 0; i < _trash; i++)
	{
		if (_floor[i])
			std::cout << _floor[i]->getType() << " ";
	}
	std::cout << std::endl;
}

/*	DESTRUCTOR	*/
Character::~Character()
{
	// std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	for (int i = 0; i < _trash; i++)
	{
		if (_floor[i])
			delete _floor[i];
	}
}
