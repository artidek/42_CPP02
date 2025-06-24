/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:20:00 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/24 21:53:16 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int	_n;
	static const int _f = 8;
public:
	Fixed(void);
	Fixed(Fixed const & copy);
	~Fixed();

	Fixed & operator=(Fixed const & copy);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
