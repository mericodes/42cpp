/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 07:57:44 by codespace         #+#    #+#             */
/*   Updated: 2025/01/22 08:12:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int	main(void)
{
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	
	double	x = 0.05;
	double	y = 2.7;
	std::cout << "x: " << x << ", y: " << y << std::endl;	
	swap(x, y);
	std::cout << "x: " << x << ", y: " << y << std::endl;
	std::cout << "min is: " << min(x, y) << std::endl;
	std::cout << "max is: " << max(x, y) << std::endl;
	
	return (0);
}
