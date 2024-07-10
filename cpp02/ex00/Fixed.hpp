/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:10:20 by codespace         #+#    #+#             */
/*   Updated: 2024/05/23 19:38:20 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
	public:
		/*	DEFAULT CONSTRUTCTOR: initilizes fixedPoint to 0	*/
		Fixed();
		/*	COPY CONSTRUCTOR	*/
		Fixed(Fixed &copy);
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Fixed& operator=(const Fixed &other);
		/*	DESTRUCTOR	*/
		~Fixed();
		/*	MEMBER FUNCTIONS	*/
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif