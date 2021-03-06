/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:03:13 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/16 21:06:04 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
/*
//mon main
int main(){
	Span	span(42);

	srand(time(NULL));
	span.addNumber(rand() % 50);
	return (0);
}
*/
// main sujet
int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return(0);
}

//main à modifier en mettant un appel à la fct qui pushback en 1 fois cf fct insert