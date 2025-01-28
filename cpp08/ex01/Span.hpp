/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:55:28 by codespace         #+#    #+#             */
/*   Updated: 2025/01/27 08:30:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _span;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();

		void addNumber(int num);
		long long shortestSpan(); 
		long long longestSpan();
};

#endif