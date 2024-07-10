/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:10:00 by codespace         #+#    #+#             */
/*   Updated: 2024/06/18 18:16:08 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) 
{
	Point A(0, 0);
	Point B(4, 0);
	Point C(0, 4);
	Point P(1, 1);
	Point Q(-5, 10);

	if (bsp(A, B, C, P))
		std::cout << "Point P is inside triangle ABC." << std::endl;
	else
		std::cout << "Point P is outside triangle ABC." << std::endl;
	if (bsp(A, B, C, Q))
		std::cout << "Point P is inside triangle ABC." << std::endl;
	else
		std::cout << "Point P is outside triangle ABC." << std::endl;
	return (0);
}
