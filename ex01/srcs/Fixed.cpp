/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:57:33 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/07 10:14:14 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
    return ;
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    Fixed::operator=(src);
    return ;
}

Fixed::Fixed( const int src )
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointNb = roundf(src * (1 << this->_bitNbFractPart));
    return ;
}

Fixed::Fixed( const float src )
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointNb = roundf(src * (1 << this->_bitNbFractPart));
    return ;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed   &   Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(rhs.getRawBits());
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointNb);
}

void    Fixed::setRawBits( int const raw )
{
    this->_fixedPointNb = raw;
    return ;
}

float   Fixed::toFloat( void ) const
{
    return ((double)this->_fixedPointNb / (double)(1 << this->_bitNbFractPart));
}

int     Fixed::toInt( void ) const
{
    return (roundf(this->toFloat()));
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
    o << rhs.toFloat();
    return (o);
}