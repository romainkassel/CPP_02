/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:03:28 by debian            #+#    #+#             */
/*   Updated: 2024/11/20 02:11:12 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H__
#define __HEADER_H__

#include "Fixed.hpp"
#include <iostream>

void    checkComparativeOperators(Fixed a, Fixed b, Fixed c);
void    checkArithmeticOperators(Fixed a, Fixed b, Fixed c, Fixed d, Fixed e);
void    checkCrementingOperator( void );
void    checkMinMaxFunctions( void );

// Tests copy by affectation 

void    testFixedCopyByAffectation();

// Tests copy by constructor 

void    testFixedCopyByConstructor();

#endif