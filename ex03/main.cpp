/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:57:59 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/25 15:40:51 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main (void)
{
	Point a(0, 0);
	Point b(4, 1);
	Point c(2, 5);

	std::cout << "point with coodinates (2,2) inside triangle " << bsp(a, b, c , Point(2, 2)) << std::endl;
	std::cout << "point with coodinates (5,5) inside triangle " << bsp(a, b, c , Point(5, 5))<<std::endl;
}
