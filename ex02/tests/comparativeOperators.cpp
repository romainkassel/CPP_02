/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparativeOperators.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:47:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 02:12:36 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    checkComparativeOperatorSup(Fixed a, Fixed b)
{
	std::cout << std::endl;
	std::cout << "** COMPARATIVE OPERATORS : >" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a.toInt() << std::endl;
	std::cout << "b : " << b.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 > 10) : " << (5 > 10) << std::endl;
	std::cout << "[Cur result] - (a > b) : " << (a > b) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10 > 5) : " << (10 > 5) << std::endl;
	std::cout << "[Cur result] - (b > a) : " << (b > a) << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkComparativeOperatorInf(Fixed a, Fixed b)
{
	std::cout << std::endl;
	std::cout << "** COMPARATIVE OPERATORS : <" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a.toInt() << std::endl;
	std::cout << "b : " << b.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 < 10) : " << (5 < 10) << std::endl;
	std::cout << "[Cur result] - (a < b) : " << (a < b) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10 < 5) : " << (10 < 5) << std::endl;
	std::cout << "[Cur result] - (b < a) : " << (b < a) << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkComparativeOperatorSupEqual(Fixed a, Fixed b, Fixed c)
{
	std::cout << std::endl;
	std::cout << "** COMPARATIVE OPERATORS : >=" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a.toInt() << std::endl;
	std::cout << "b : " << b.toInt() << std::endl;
	std::cout << "c : " << c.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 >= 10) : " << (5 >= 10) << std::endl;
	std::cout << "[Cur result] - (a >= b) : " << (a >= b) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10 >= 5) : " << (10 >= 5) << std::endl;
	std::cout << "[Cur result] - (b >= a) : " << (b >= a) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 >= 5) : " << (5 >= 5) << std::endl;
	std::cout << "[Cur result] - (a >= c) : " << (a >= c) << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkComparativeOperatorInfEqual(Fixed a, Fixed b, Fixed c)
{
	std::cout << std::endl;
	std::cout << "** COMPARATIVE OPERATORS : <=" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a.toInt() << std::endl;
	std::cout << "b : " << b.toInt() << std::endl;
	std::cout << "c : " << c.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 <= 10) : " << (5 <= 10) << std::endl;
	std::cout << "[Cur result] - (a <= b) : " << (a <= b) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (10 <= 5) : " << (10 <= 5) << std::endl;
	std::cout << "[Cur result] - (b <= a) : " << (b <= a) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 <= 5) : " << (5 <= 5) << std::endl;
	std::cout << "[Cur result] - (a <= c) : " << (a <= c) << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkComparativeOperatorEqual(Fixed a, Fixed b, Fixed c)
{
	std::cout << std::endl;
	std::cout << "** COMPARATIVE OPERATORS : ==" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a.toInt() << std::endl;
	std::cout << "b : " << b.toInt() << std::endl;
	std::cout << "c : " << c.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 == 10) : " << (5 == 10) << std::endl;
	std::cout << "[Cur result] - (a == b) : " << (a == b) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 == 5) : " << (5 == 5) << std::endl;
	std::cout << "[Cur result] - (a == c) : " << (a == c) << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkComparativeOperatorDiff(Fixed a, Fixed b, Fixed c)
{
	std::cout << std::endl;
	std::cout << "** COMPARATIVE OPERATORS : !=" << std::endl;
	std::cout << std::endl;

	std::cout << "a : " << a.toInt() << std::endl;
	std::cout << "b : " << b.toInt() << std::endl;
	std::cout << "c : " << c.toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 != 10) : " << (5 != 10) << std::endl;
	std::cout << "[Cur result] - (a != b) : " << (a != b) << std::endl;
	std::cout << std::endl;
	std::cout << "[Exp result] - (5 != 5) : " << (5 != 5) << std::endl;
	std::cout << "[Cur result] - (a != c) : " << (a != c) << std::endl;
	std::cout << std::endl;
    return ;
}

void    checkComparativeOperators(Fixed a, Fixed b, Fixed c)
{
    std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << std::endl;
	std::cout << "* COMPARATIVE OPERATORS - START" << std::endl;
	std::cout << std::endl;
    
	std::cout << "********************************" << std::endl;
	checkComparativeOperatorSup(a, b);
	std::cout << "********************************" << std::endl;
	checkComparativeOperatorInf(a, b);
	std::cout << "********************************" << std::endl;
	checkComparativeOperatorSupEqual(a, b, c);
	std::cout << "********************************" << std::endl;
	checkComparativeOperatorInfEqual(a, b, c);
	std::cout << "********************************" << std::endl;
	checkComparativeOperatorEqual(a, b, c);
	std::cout << "********************************" << std::endl;
	checkComparativeOperatorDiff(a, b, c);
    std::cout << "********************************" << std::endl;

    std::cout << std::endl;
	std::cout << "* COMPARATIVE OPERATORS - END" << std::endl;
	std::cout << std::endl;
    std::cout << "********************************" << std::endl;
	std::cout << std::endl;
    
    return ;
}

