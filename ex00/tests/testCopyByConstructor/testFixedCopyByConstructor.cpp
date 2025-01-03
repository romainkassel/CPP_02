/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testFixedCopyByConstructor.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 00:51:57 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Fixed fixed1) {

	std::cout << std::endl;
	
	// Display of fixed1 attributes

    std::cout << "Fixed 1 -> _fixedPointNb : " << fixed1.getRawBits() << std::endl;

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
	
	// Creation of a Fixed instance (will be copied)
	
	Fixed	fixed1;
	std::cout << std::endl;

    // Display of fixed1 attributes

    std::cout << "Fixed 1 -> _fixedPointNb : " << fixed1.getRawBits() << std::endl;

	std::cout << std::endl;
	
	testCopyByConstructor(fixed1);

	std::cout << std::endl;
	
	return ;
}