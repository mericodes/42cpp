/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:10:20 by codespace         #+#    #+#             */
/*   Updated: 2024/05/26 16:53:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Fixed();

		/*	INT AND FLOAT CONSTRUCTOR	*/
		Fixed(const int val);
		Fixed(const float val);
		
		/*	COPY CONSTRUCTOR	*/
		Fixed(const Fixed &copy);
		
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Fixed& operator=(const Fixed &other);

		/*	DESTRUCTOR	*/
		~Fixed();

		/*	MEMBER FUNCTIONS	*/
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		/*	COMPARISON OPERATORS MEMBER FUNCTIONS	*/
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		
		/*	ARITHMETIC OPERATORS MEMBER FUNCTIONS	*/
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
		
		/*	PRE AND POST INCREMENT/DECREMENT	*/
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		/*	STATIC MEMBER FUNCTIONS	*/
		static Fixed &min(Fixed &f1, Fixed &f2);
		static const Fixed &min(const Fixed &f1, const Fixed &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static const Fixed &max(const Fixed &f1, const Fixed &f2);
};

/*	OVERLOAD OF INSERTION OPERATOR	*/
std::ostream &operator<<(std::ostream& os, const Fixed& dt);

#endif