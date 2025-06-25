/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:34:17 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/25 11:59:17 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
}

Fixed::Fixed(int const i)
{
	_n = i << this->_f;
}

Fixed::Fixed(float const f)
{
	_n = static_cast<int>(roundf(f * (1 << _f)));
}

Fixed::Fixed(Fixed const & copy)
{
	*this = copy;
}

Fixed::~Fixed(void)
{
}

Fixed&	Fixed::operator= (Fixed const& copy)
{
	if (this != &copy)
		this->_n = copy.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & cmpFix)
{
	if (this->getRawBits() > cmpFix.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const & cmpFix)
{
	if (this->getRawBits() < cmpFix.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const & cmpFix)
{
	if (this->getRawBits() >= cmpFix.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const & cmpFix)
{
	if (this->getRawBits() <= cmpFix.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const & cmpFix)
{
	if (this->getRawBits() == cmpFix.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & cmpFix)
{
	if (this->getRawBits() != cmpFix.getRawBits())
		return true;
	return false;
}

Fixed & Fixed::operator++()
{
	this->_n += 1;
	return *this;
}

Fixed & Fixed::operator--()
{
	this->_n -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_n += 1;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_n -= 1;
	return temp;
}

Fixed & Fixed::operator+(Fixed const & addFix)
{
	Fixed *sum = this;

	(*sum).setRawBits(this->_n + addFix.getRawBits());
	return *sum;
}

Fixed & Fixed::operator-(Fixed const & addFix)
{
	Fixed *diff = this;

	(*diff).setRawBits(this->_n - addFix.getRawBits());
	return *diff;
}

Fixed & Fixed::operator*(Fixed const & addFix)
{
	Fixed *res = this;
	int64_t res_i;
	res_i = static_cast<int64_t>(this->_n) * static_cast<int64_t>(addFix.getRawBits());
	res_i += (1LL << (Fixed::_f - 1));
	res->setRawBits(static_cast<int> (res_i >> Fixed::_f));
	return *res;
}

Fixed & Fixed::operator/(Fixed const & addFix)
{
	Fixed *res = this;
	int64_t res_i;
	res_i = (static_cast<int64_t>(this->_n) << Fixed::_f);
	res_i += (addFix.getRawBits()/2);
	res->setRawBits(static_cast<int>(res_i / addFix.getRawBits()));
	return *res;
}

int	Fixed::getRawBits(void) const
{
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

Fixed & Fixed::min(Fixed & n1, Fixed & n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n1;
	return n2;
}

const Fixed & Fixed::min(Fixed const &n1, Fixed const &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return n1;
	return n2;
}

Fixed & Fixed::max(Fixed & n1, Fixed & n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	return n2;
}

const Fixed & Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return n1;
	return n2;
}
