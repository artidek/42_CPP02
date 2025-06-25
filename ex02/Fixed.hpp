/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:22:02 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/25 11:20:03 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
private:
	int	_n;
	static const int _f = 8;
public:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const & copy);
	~Fixed();

	Fixed & operator=(Fixed const & copy);

	bool operator>(Fixed const & cmpFix);
	bool operator<(Fixed const &cmpFix);
	bool operator>=(Fixed const &cmpFix);
	bool operator<=(Fixed const &cmpFix);
	bool operator==(Fixed const &cmpFix);
	bool operator!=(Fixed const &cmpFix);

	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	Fixed & operator+(Fixed const & addFix);
	Fixed & operator-(Fixed const & subFix);
	Fixed & operator*(Fixed const & mulFix);
	Fixed & operator/(Fixed const & divFix);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float toFloat(void) const;
	int	toInt(void) const;
	static Fixed & min(Fixed & n1, Fixed & n2);
	static const Fixed  & min (Fixed const & n1, Fixed const &n2);
	static Fixed & max(Fixed & n1, Fixed & n2);
	static const Fixed  & max(Fixed const & n1, Fixed const &n2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & ser);

#endif
