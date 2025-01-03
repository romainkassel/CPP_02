/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testPointCopyByConstructor.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:05:10 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 03:24:27 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Point point1, Point point2) {

	// Display of point attributes
	
    std::cout << "Point 1 void param -> x _fixedPointNb (fixed output): " << point1.getX().getRawBits() << std::endl;
	std::cout << "Point 1 void param -> y _fixedPointNb (fixed output): " << point1.getY().getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "Point 2 float param -> x _fixedPointNb (fixed output): " << point2.getX().getRawBits() << std::endl;
	std::cout << "Point 2 float param -> y _fixedPointNb (fixed output): " << point2.getY().getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "Point 2 float param -> x _fixedPointNb (int output): " << point2.getX().toInt() << std::endl;
	std::cout << "Point 2 float param -> y _fixedPointNb (int output): " << point2.getY().toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "Point 2 float param -> x _fixedPointNb (float output): " << point2.getX() << std::endl;
	std::cout << "Point 2 float param -> y _fixedPointNb (float output): " << point2.getY() << std::endl;
	std::cout << std::endl;
	
	return ;
}

void	testPointCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from Point" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of Point instances (will be copied)

	Point	point1;
	Point	point2( 42.42f, 67.87f );
	std::cout << std::endl;

    // Display of point attributes
	
    std::cout << "Point 1 void param -> x _fixedPointNb (fixed output): " << point1.getX().getRawBits() << std::endl;
	std::cout << "Point 1 void param -> y _fixedPointNb (fixed output): " << point1.getY().getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "Point 2 float param -> x _fixedPointNb (fixed output): " << point2.getX().getRawBits() << std::endl;
	std::cout << "Point 2 float param -> y _fixedPointNb (fixed output): " << point2.getY().getRawBits() << std::endl;
	std::cout << std::endl;
	std::cout << "Point 2 float param -> x _fixedPointNb (int output): " << point2.getX().toInt() << std::endl;
	std::cout << "Point 2 float param -> y _fixedPointNb (int output): " << point2.getY().toInt() << std::endl;
	std::cout << std::endl;
	std::cout << "Point 2 float param -> x _fixedPointNb (float output): " << point2.getX() << std::endl;
	std::cout << "Point 2 float param -> y _fixedPointNb (float output): " << point2.getY() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	
	testCopyByConstructor(point1, point2);

	return ;
}