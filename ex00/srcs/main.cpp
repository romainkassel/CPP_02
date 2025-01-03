/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/20 00:55:31 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Header.hpp"
#include <iostream>

// Subject main

int	main( void ) {

	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}

// Personal main

/*int	main( void ) {

	// Tests copy by affectation 

	testFixedCopyByAffectation();

	// Tests copy by constructor 

	testFixedCopyByConstructor();

	return 0;
}*/