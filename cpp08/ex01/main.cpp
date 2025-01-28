/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:54:58 by codespace         #+#    #+#             */
/*   Updated: 2025/01/27 16:01:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try
	{
		Span a(4);
		a.addNumber(1);
		a.addNumber(2);
		a.addNumber(3);
		a.addNumber(4);
		a.addNumber(5);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span b(4);
		b.addNumber(1);
		b.addNumber(2);
		b.addNumber(5);
		b.addNumber(31);
		std::cout << "Shortest Span is: " << b.shortestSpan() << std::endl;
		std::cout << "Longest Span is: " << b.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	
	return (0);
}