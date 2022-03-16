/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:29:27 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/16 19:43:25 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0){
}

Span::Span(unsigned int N) : _n(N){
	// mettre _v a null? ou rien a faire de particulier?
}
		
		
Span::Span(const Span & span_cp){
	*this = span_cp;
}


Span::~Span(){
	
}

Span & Span::operator=(const Span &span_op){
	_n = span_op._n;
	_v = span_op._v;
	return (*this);
}

void	Span::addNumber(int nb){
	if (_v.size() > _n) // ou >= ?
		throw FullSpan();
	_v.push_back(nb);
}

//ranger du + petit au plus grand (sort)
//, faire la diff avec l'él suivant à l'aide des iterators (à stocker dans une var diff)
// puis checker les diffs suivantes : si elle est >= ne pas changer diff
// si elle est < : changer diff
// retourner diff
int		Span::shortestSpan(){
	int diff;

	if (_n == 0 || _n == 1)
		throw NoDistance();
	std::sort(_v.begin(), _v.end());
	std::vector<int>::iterator	it = _v.begin();
	diff = *(it + 1) - *it;
	for (it = _v.begin(); it != _v.end() - 1; it++){
		if (*(it + 1) - *it < diff)
			diff = *(it + 1) - *it;
//		std::cout << "it " << *it << " it + 1 " << *(it + 1) << " diff " << diff << std::endl;
	}
	return (diff);
}

// trouver le plus petit élement et le plus grand et faire leur différence
int		Span::longestSpan(){
	if (_n == 0 || _n == 1)
		throw NoDistance();
	return (*std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end()));
}
