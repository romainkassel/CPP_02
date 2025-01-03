/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testFixedCopyByConstructor.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 01:45:15 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Fixed fixed1, Fixed fixed2, Fixed fixed3) {

	std::cout << std::endl;

	// Display of fixed attributes

    std::cout << "Fixed 1 void param -> _fixedPointNb (fixed output): " << fixed1.getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "Fixed 2 int param -> _fixedPointNb (fixed output): " << fixed2.getRawBits() << std::endl;
	std::cout << "Fixed 2 int param -> _fixedPointNb (int output): " << fixed2.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "Fixed 3 float param -> _fixedPointNb (fixed output) : " << fixed3.getRawBits() << std::endl;
	std::cout << "Fixed 3 float param -> _fixedPointNb (float output): " << fixed3.toFloat() << std::endl;

	std::cout << std::endl;
	
	return ;
}

void	testFixedCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from Fixed" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of Fixed instances (will be copied)
	
	Fixed	fixed1;
	Fixed	fixed2( 42 );
	Fixed	fixed3( 42.42f );
	std::cout << std::endl;

    // Display of fixed attributes

    std::cout << "Fixed 1 void param -> _fixedPointNb (fixed output): " << fixed1.getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "Fixed 2 int param -> _fixedPointNb (fixed output): " << fixed2.getRawBits() << std::endl;
	std::cout << "Fixed 2 int param -> _fixedPointNb (int output): " << fixed2.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "Fixed 3 float param -> _fixedPointNb (fixed output) : " << fixed3.getRawBits() << std::endl;
	std::cout << "Fixed 3 float param -> _fixedPointNb (float output): " << fixed3.toFloat() << std::endl;

	std::cout << std::endl;

	testCopyByConstructor(fixed1, fixed2, fixed3);

	std::cout << std::endl;
	
	return ;
}