/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:31:19 by debian            #+#    #+#             */
/*   Updated: 2024/11/11 07:52:45 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Fixed	getArea( Point const vOne, Point const vTwo, Point const vThree )
{
	Fixed		area;
	Fixed const	mult( 0.5f );
	Fixed const	zero;

	area = mult * ((vOne.getX() * (vTwo.getY() - vThree.getY()))
		+ (vTwo.getX() * (vThree.getY() - vOne.getY())) + (vThree.getX() * (vOne.getY() - vTwo.getY())));
	
	return (area);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area1;
	Fixed area2;
	Fixed area3;

	area1 = getArea(a, b, point);
	//std::cout << "area1 : " << area1 << std::endl;
	area2 = getArea(b, c, point);
	//std::cout << "area2 : " << area2 << std::endl;
	area3 = getArea(c, a, point);
	//std::cout << "area3 : " << area3 << std::endl;
	
	if ((area1 > 0 && area2 > 0 && area3 > 0)
		|| (area1 < 0 && area2 < 0 && area3 < 0))
		return (true);
	else
		return (false);
}