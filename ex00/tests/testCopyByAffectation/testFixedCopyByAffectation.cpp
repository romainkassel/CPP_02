/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testFixedCopyByAffectation.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 00:47:34 by debian           ###   ########.fr       */
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
	
	// Creation of a Fixed instance (will be copied)
	
	Fixed	fixed1;
	std::cout << std::endl;

    // Display of fixed1 attributes

    std::cout << "Fixed 1 -> _fixedPointNb : " << fixed1.getRawBits() << std::endl;
	
	std::cout << std::endl;

	// Creation of a Fixed instance (copy)
	
	Fixed	fixed2;
    
    std::cout << std::endl;
    
	fixed2 = fixed1;

    // Display of fixed1 attributes

    std::cout << "Fixed 2 -> _fixedPointNb : " << fixed2.getRawBits() << std::endl;

	std::cout << std::endl;
	
	return ;
}