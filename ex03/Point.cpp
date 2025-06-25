/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:17:22 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/25 15:37:12 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed()), _y(Fixed())
{
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point & p) : _x(p._x), _y(p._y)
{
}

Point::~Point(void)
{
}

Fixed const & Point::getX(void) const
{
	return this->_x;
}

Fixed const & Point::getY (void) const
{
	return this->_y;
}

std::ostream & operator<<(std::ostream & o, Point const &ser)
{
	o << ser.getX()<< ',' << ser.getY();
	return o;
}
