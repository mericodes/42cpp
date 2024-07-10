/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:58:27 by codespace         #+#    #+#             */
/*   Updated: 2024/05/28 17:57:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(const float x, const float y);
		/*	COPY CONSTRUCTOR	*/
		Point(const Point &copy);
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Point& operator=(const Point &other);

		const Fixed getX() const;
		const Fixed getY() const;
		
		~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif