/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:41:50 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/20 02:10:55 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <ostream>

class	Fixed {


public:

	Fixed( void );
	Fixed( Fixed const & src );
	Fixed( const int src );
	Fixed( const float src );
	~Fixed( void );

	Fixed	&operator=( Fixed const & rhs );

	bool	operator>( Fixed const & rhs ) const;
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;

	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed	&min( Fixed & first, Fixed & second);
	static Fixed	const &min( Fixed const & first, Fixed const & second);
	static Fixed	&max( Fixed & first, Fixed & second);
	static Fixed	const &max( Fixed const & first, Fixed const & second);

private:

	int					_fixedPointNb;
	static const int	_bitNbFractPart = 8;


};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif