/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:55:10 by codespace         #+#    #+#             */
/*   Updated: 2025/01/27 16:02:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
	std::cout << "Span Default Constructor Called" << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Span Constructor Called" << std::endl;
}

Span::Span(const Span &other)
{
	std::cout << "Span Copy Constructor Called" << std::endl;
	*this = other;
}

Span& Span::operator=(const Span &other)
{
	std::cout << "Span Copy Assignment Operator Called" << std::endl;
	if (this == &other)
		return (*this);
	_N = other._N;
	_span.clear();
	std::copy(other._span.begin(), other._span.end(), std::back_inserter(_span));
	return (*this);
}

Span::~Span()
{
	std::cout << "Default Destructor Called" << std::endl;
}

void Span::addNumber(int num)
{
	if (_span.size() < _N)
		_span.push_back(num);
	else
		throw std::length_error("Value does not fit in the current Span");
}

long long Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::length_error("Not enough values");
	std::vector<int> sorted;
	
}

long long Span::longestSpan()
{
	if (_span.size() < 2)
		throw std::length_error("Not enough values");
	int minElement = *std::min_element(_span.begin(), _span.end());
	int maxElement = *std::max_element(_span.begin(), _span.end());
	return (long long)(maxElement - minElement);
}
