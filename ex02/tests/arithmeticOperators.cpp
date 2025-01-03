/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmeticOperators.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:47:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 02:11:39 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    checkArithmeticOperatorPlus(Fixed a, Fixed b, Fixed c, Fixed d, Fixed e)
{
	std::cout << std::endl;
	std::cout << "** ARITHMETIC OPERATORS : +" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	
	std::cout << std::endl;
	c = a + b;
	std::cout << "c : " << "a + b" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 + 10) : " << (5 + 10) << std::endl;
	std::cout << "[Cur result] - (a + b) : " << c << std::endl;

	std::cout << std::endl;
	c = d + e;
	std::cout << "c : " << "d + e" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5.5 + 10.3008) : " << (5.5 + 10.3008) << std::endl;
	std::cout << "[Cur result] - (d + e) : " << c << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkArithmeticOperatorMinus(Fixed a, Fixed b, Fixed c, Fixed d, Fixed e)
{
	std::cout << std::endl;
	std::cout << "** ARITHMETIC OPERATORS : -" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	
	std::cout << std::endl;
	c = b - a;
	std::cout << "c : " << "b - a" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10 - 5) : " << (10 - 5) << std::endl;
	std::cout << "[Cur result] - (b - a) : " << c << std::endl;

	std::cout << std::endl;
	c = e - d;
	std::cout << "c : " << "e - d" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10.3008 - 5.5) : " << (10.3008 - 5.5) << std::endl;
	std::cout << "[Cur result] - (e - d) : " << c << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkArithmeticOperatorMult(Fixed a, Fixed b, Fixed c, Fixed d, Fixed e)
{
	std::cout << std::endl;
	std::cout << "** ARITHMETIC OPERATORS : *" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	
	std::cout << std::endl;
	c = b * a;
	std::cout << "c : " << "b * a" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10 * 5) : " << (10 * 5) << std::endl;
	std::cout << "[Cur result] - (b * a) : " << c << std::endl;

	std::cout << std::endl;
	c = e * d;
	std::cout << "c : " << "e * d" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10.3008 * 5.5) : " << (10.3008 * 5.5) << std::endl;
	std::cout << "[Cur result] - (e * d) : " << c << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkArithmeticOperatorDiv(Fixed a, Fixed b, Fixed c, Fixed d, Fixed e)
{
	std::cout << std::endl;
	std::cout << "** ARITHMETIC OPERATORS : /" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	
	std::cout << std::endl;
	c = b / a;
	std::cout << "c : " << "b / a" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10 / 5) : " << (10 / 5) << std::endl;
	std::cout << "[Cur result] - (b / a) : " << c << std::endl;

	std::cout << std::endl;
	c = e / d;
	std::cout << "c : " << "e / d" << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10.3008 / 5.5) : " << (10.3008 / 5.5) << std::endl;
	std::cout << "[Cur result] - (e / d) : " << c << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkArithmeticOperators(Fixed a, Fixed b, Fixed c, Fixed d, Fixed e)
{
    std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << std::endl;
	std::cout << "* ARITHMETIC OPERATORS - START" << std::endl;
	std::cout << std::endl;
    
	std::cout << "********************************" << std::endl;
	checkArithmeticOperatorPlus(a, b, c, d, e);
	std::cout << "********************************" << std::endl;
	checkArithmeticOperatorMinus(a, b, c, d, e);
	std::cout << "********************************" << std::endl;
	checkArithmeticOperatorMult(a, b, c, d, e);
	std::cout << "********************************" << std::endl;
	checkArithmeticOperatorDiv(a, b, c, d, e);
	std::cout << "********************************" << std::endl;

    std::cout << std::endl;
	std::cout << "* ARITHMETIC OPERATORS - END" << std::endl;
	std::cout << std::endl;
    std::cout << "********************************" << std::endl;
	std::cout << std::endl;
    
    return ;
}

