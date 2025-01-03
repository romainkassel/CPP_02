/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/20 03:25:26 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "Point.hpp"
#include "Header.hpp"
#include <iostream>

int main( void ) {

	Point const	a( 0.0f, 0.0f );
	Point const	b( 0.5f, 1.0f );
	Point const	c( 1.0f, 0.0f );
	
	// Test 1 - Center, should return TRUE
	Point const point( 0.5f, 0.5f );

	// Test 2 - On vertex a, should return FALSE
	//Point const point( 0.0f, 0.0f );

	// Test 3 - On vertex b, should return FALSE
	//Point const point( 0.5f, 1.0f );

	// Test 4 - On vertex c, should return FALSE
	//Point const point( 1.0f, 0.0f );

	// Test 5 - On a edge, should return FALSE
	//Point const point ( 0.6f, 0.8f );

	// Test 6 - Inside, should return TRUE (all areas negative)
	//Point const point ( 0.6f, 0.7f );

	// Test 7 - Outside, should return FALSE
	//Point const point ( 0.6f, 0.9f );

	// Test 8 - Inside, should return TRUE (all areas positive)
	/*Point const	a( 0.0f, 0.0f );
	Point const	b( 10.0f, 0.0f );
	Point const	c( 5.0f, 20.0f );
	Point const point ( 0.7f, 0.4f );*/

	bool		rvalue;
	std::string	strBool;
	
	rvalue = bsp( a, b, c, point);
	if (rvalue == 0)
		strBool = "False";
	else
		strBool = "True";

	std::cout << std::endl;

	std::cout << "a -> x : " << a.getX() << std::endl;
	std::cout << "a -> y : " << a.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "b -> x : " << b.getX() << std::endl;
	std::cout << "b -> y : " << b.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "c -> x : " << c.getX() << std::endl;
	std::cout << "c -> y : " << c.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "point -> x : " << point.getX() << std::endl;
	std::cout << "point -> y : " << point.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "Is the point located inside the triangle ? " << strBool << std::endl;

	std::cout << std::endl;

	// Tests copy by affectation 

	testFixedCopyByAffectation();

	// Tests copy by constructor

	testFixedCopyByConstructor();
	testPointCopyByConstructor();
	
	return 0;
}