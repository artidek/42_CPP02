/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:37:31 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/24 20:04:59 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator= (Fixed const& copy)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &copy)
		this->_n = copy.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawbits member fucntion called\n";
	return this->_n;
}

int	Fixed::setRawBits(int const raw)
{
	return raw * (1 << this->_f);
}
