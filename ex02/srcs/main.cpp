/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/20 02:17:40 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Header.hpp"
#include <iostream>

// Subject main

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

// Personal main

/*int main( void ) {

	Fixed	a( 5 );
	Fixed	b( 10 );
	Fixed	c( 5 );
	Fixed	d( 5.5f );
	Fixed	e( 10.3f );

	checkComparativeOperators(a, b, c);
	checkArithmeticOperators(a, b, c, d, e);
	checkCrementingOperator();
	checkMinMaxFunctions();

	// Tests copy by affectation 

	testFixedCopyByAffectation();

	// Tests copy by constructor 

	testFixedCopyByConstructor();
}*/