/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:57:33 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/07 10:11:45 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointNb);
}

void    Fixed::setRawBits( int const raw )
{
    this->_fixedPointNb = raw;
    return ;
}