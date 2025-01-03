/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 07:29:40 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 03:20:37 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point( void ) : _x(0), _y(0)
{
    //std::cout << "Default constructor called" << std::endl;
    return ;
}

Point::Point ( float const x, float const y ) : _x(x), _y(y)
{
    //std::cout << "Double float const constructor called" << std::endl;
    return ;
}

Point::Point( Point const & src ) : _x(src.getX().toFloat()), _y(src.getY().toFloat())
{
    //std::cout << "Constructor by copy called" << std::endl;
    return ;
}

Point::~Point ( void )
{
    //std::cout << "Destructor called" << std::endl;
    return ;
}

Point   &Point::operator=( Point const & rhs )
{
    (void)rhs;
    return (*this);
}

Fixed   Point::getX( void ) const
{
    return (_x);
}

Fixed   Point::getY( void ) const
{
    return (_y);
}