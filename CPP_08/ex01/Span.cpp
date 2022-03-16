/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:29:27 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/16 13:44:00 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
}

Span::Span(unsigned int N) : _n(N){
	// mettre _v a null? ou rien a faire de particulier?
}
		
		
Span::Span(const Span & span_cp){
	_n = span_cp._n;
}


Span::~Span(){
	
}

Span & Span::operator=(const Span &span_op){
	_n = span_op._n;
	return (*this);
}

void	Span::addNumber(int nb){
	_v.push_back(nb);
}

int		Span::shortestSpan(){
	
}
		
int		Span::longestSpan(){
	
}
