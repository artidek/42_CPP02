/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:18:37 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/25 16:29:47 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ax = a.getX(), ay = a.getY();
	Fixed bx = b.getX(), by = b.getY();
	Fixed cx = c.getX(), cy = c.getY();
	Fixed px = point.getX(), py = point.getY();

	Fixed v0x = bx - ax, v0y = by - ay;
	Fixed v1x = cx - ax, v1y = cy - ay;
	Fixed v2x = px - ax, v2y = py - ay;

	Fixed d00 = v0x * v0x + v0y * v0y;
	Fixed d01 = v0x * v1x + v0y * v1y;
	Fixed d11 = v1x * v1x + v1y * v1y;
	Fixed d20 = v2x * v0x + v2y * v0y;
	Fixed d21 = v2x * v1x + v2y * v1y;

	Fixed denom = d00 * d11 - d01 * d01;
	if (denom == Fixed(0)) return false;

	if (denom.toFloat() < 0)
		denom = denom * Fixed(-1.0f);

	Fixed u = (d11 * d20 - d01 * d21) / denom;
	Fixed v = (d00 * d21 - d01 * d20) / denom;

	if (u.toFloat() >=0 && v.toFloat() >= 0 && u.toFloat() + v.toFloat() < 1)
		return true;
	return false;
}
