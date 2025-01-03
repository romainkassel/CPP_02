/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkMinMaxFunctions.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:47:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 02:12:29 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    CheckMin(Fixed a, Fixed b)
{
	std::cout << std::endl;
	std::cout << "** MIN MAX FUNCTIONS - MIN" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	
	std::cout << std::endl;
	std::cout << "Fixed::min(a, b) : " << Fixed::min(a, b) << std::endl;

	std::cout << std::endl;
	
    return ;
}

void    CheckMinConst(Fixed const c, Fixed const d)
{
	std::cout << std::endl;
	std::cout << "** MIN MAX FUNCTIONS - MIN CONST" << std::endl;
	std::cout << std::endl;

	std::cout << "const c : " << c << std::endl;
	std::cout << "const d : " << d << std::endl;
	
	std::cout << std::endl;
	std::cout << "Fixed::min(c, d) : " << Fixed::min(c, d) << std::endl;

	std::cout << std::endl;
	
    return ;
}

void    CheckMax(Fixed a, Fixed b)
{
	std::cout << std::endl;
	std::cout << "** MIN MAX FUNCTIONS - MAX" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	
	std::cout << std::endl;
	std::cout << "Fixed::max(a, b) : " << Fixed::max(a, b) << std::endl;

	std::cout << std::endl;
	
    return ;
}

void    CheckMaxConst(Fixed const c, Fixed const d)
{
	std::cout << std::endl;
	std::cout << "** MIN MAX FUNCTIONS - MAX CONST" << std::endl;
	std::cout << std::endl;

	std::cout << "const c : " << c << std::endl;
	std::cout << "const d : " << d << std::endl;
	
	std::cout << std::endl;
	std::cout << "Fixed::max(c, d) : " << Fixed::max(c, d) << std::endl;

	std::cout << std::endl;
	
    return ;
}

void    checkMinMaxFunctions( void )
{
	Fixed		a( 5 );
	Fixed		b( 10 );
	Fixed const	c( 5 );
	Fixed const	d( 10 );
	
	std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << std::endl;
	std::cout << "* MIN MAX FUNCTIONS - START" << std::endl;
	std::cout << std::endl;
    
	std::cout << "********************************" << std::endl;
	CheckMin(a, b);
	std::cout << "********************************" << std::endl;
	CheckMinConst(c, d);
	std::cout << "********************************" << std::endl;
	CheckMax(a, b);
	std::cout << "********************************" << std::endl;
	CheckMaxConst(c, d);
	std::cout << "********************************" << std::endl;

    std::cout << std::endl;
	std::cout << "* MIN MAX FUNCTIONS - END" << std::endl;
	std::cout << std::endl;
    std::cout << "********************************" << std::endl;
	std::cout << std::endl;
    
    return ;
}

