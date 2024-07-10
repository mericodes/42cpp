/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:58:33 by codespace         #+#    #+#             */
/*   Updated: 2024/05/29 19:35:14 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{}

Point::Point(const float x, const float y) : _x(x),_y(y)
{}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY())
{}

Point& Point::operator=(const Point &other)
{
	if (this != &other)
		std::cout << "Copy assignment error: cannot assign a constant variable" << std::endl;
	return (*this);
}

const Fixed Point::getX() const
{
	return (_x);
}

const Fixed Point::getY() const
{
	return (_y);
}

Point::~Point()
{}