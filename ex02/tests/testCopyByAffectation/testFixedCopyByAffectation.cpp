/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testFixedCopyByAffectation.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 01:38:36 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testFixedCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from Fixed" << std::endl;
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

	// Creation of Fixed instances (copy)
	
	Fixed	fixed4;
	Fixed	fixed5;
	Fixed	fixed6;
    
    std::cout << std::endl;
    
	fixed4 = fixed1;
	fixed5 = fixed2;
	fixed6 = fixed3;

	std::cout << std::endl;

    // Display of fixed copies attributes

    std::cout << "Fixed 4 void param -> _fixedPointNb (fixed output): " << fixed4.getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "Fixed 5 int param -> _fixedPointNb (fixed output): " << fixed5.getRawBits() << std::endl;
	std::cout << "Fixed 5 int param -> _fixedPointNb (int output): " << fixed5.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "Fixed 6 float param -> _fixedPointNb (fixed output) : " << fixed6.getRawBits() << std::endl;
	std::cout << "Fixed 6 float param -> _fixedPointNb (float output): " << fixed6.toFloat() << std::endl;

	std::cout << std::endl;
	
	return ;
}