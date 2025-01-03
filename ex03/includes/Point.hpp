/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:28:54 by debian            #+#    #+#             */
/*   Updated: 2024/11/11 03:09:06 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point {


public : 

    Point( void );
    Point ( float const x, float const y);
	Point( Point const & src );
	~Point ( void );

    Point   &operator=( Point const & rhs );

    Fixed   getX( void ) const;
    Fixed   getY( void ) const;

private :

    const Fixed _x;
    const Fixed _y;

};

bool    bsp( Point const a, Point const b, Point const c, Point const point);

#endif
