/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:41:50 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/07 10:11:51 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

class	Fixed {


public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed	&operator=( Fixed const & rhs );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int					_fixedPointNb;
	static const int	_bitNbFractPart = 8;
	
};

#endif