/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkCrementingOperator.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:47:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 02:12:23 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

void    checkCrementingOperator( void )
{

	std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << std::endl;
	std::cout << "* CREMENTING OPERATORS - START" << std::endl;
	std::cout << std::endl;
    
	std::cout << "********************************" << std::endl;
	std::cout << std::endl;
	
	Fixed a;
	
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;

	std::cout << std::endl;

	std::cout << "a : " << a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a-- : " << a-- << std::endl;
	std::cout << "a : " << a << std::endl;
	
	std::cout << std::endl;
	std::cout << "********************************" << std::endl;

    std::cout << std::endl;
	std::cout << "* CREMENTING OPERATORS - END" << std::endl;
	std::cout << std::endl;
    std::cout << "********************************" << std::endl;
	std::cout << std::endl;
    
    return ;
}

