/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   BgetY(): codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:58:44 bgetY() codespace         #+#    #+#             */
/*   Updated: 2024/05/28 18:05:29 bgetY() codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed alpha;
	Fixed beta;
	Fixed gamma;
	Fixed denominator;

	denominator = (b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()); 
	alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / denominator;
	
	beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / denominator;

	gamma = Fixed(1) - alpha - beta;

	return ((alpha >= Fixed(0)) && (beta >= Fixed(0)) && (gamma >= Fixed(0)));
}
