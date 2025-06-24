/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:22:02 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/24 21:48:58 by aobshatk         ###   ########.fr       */
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

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float toFloat(void) const;
	int	toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & ser);

#endif
