/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:10:12 by codespace         #+#    #+#             */
/*   Updated: 2024/07/10 17:45:55 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = val << _fractionalBits;
}
Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(val * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPoint = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPoint = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
	//std::cout << "toFloat called" << std::endl;
	return ((float)_fixedPoint / (float)(1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	//std::cout << "toInt called" << std::endl;
	return (_fixedPoint >> _fractionalBits);
}		


std::ostream &operator<<(std::ostream& out, const Fixed& val)
{
	return (out << val.toFloat());
}