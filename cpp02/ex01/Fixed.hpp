/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:10:20 by codespace         #+#    #+#             */
/*   Updated: 2024/07/10 17:46:31 by mlopez-i         ###   ########.fr       */
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
		/*	CONSTRUCTORS	*/
		Fixed();
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
};

std::ostream &operator<<(std::ostream& os, const Fixed& dt);

#endif