/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:34:17 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/24 21:50:52 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const i)
{
	std::cout <<"Int constructor called\n";
	_n = i << this->_f;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called\n";
	_n = static_cast<int>(roundf(f * (1 << _f)));
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

void	Fixed::setRawBits(int const raw)
{
	_n = raw;
}

int Fixed::toInt(void) const
{
	return static_cast<int>( _n) / (1 << 8);
}

float Fixed::toFloat(void) const
{
	return static_cast<float> (_n) / (1 << 8);
}

std::ostream & operator<<(std::ostream & o, Fixed const &ser)
{
	o << ser.toFloat();
	return o;
}
