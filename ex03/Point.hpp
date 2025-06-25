/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:18:00 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/25 15:36:19 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
	Point & operator=(Point & p);
public:
	Point(void);
	Point(const float x, const float y );
	Point(const Point & p);
	~Point();

	

	Fixed const & getX (void) const;
	Fixed const & getY (void) const;
};

std::ostream & operator<<(std::ostream & o, Point const & ser);

#endif
