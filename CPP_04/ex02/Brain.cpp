/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:56 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/26 13:06:39 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & brain_cpy){
	*this = brain_cpy;
	std::cout << "Brain copy called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & brain_op){
	std::cout << "Brain copy assignment called" << std::endl;

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain_op._ideas[i];

	return (*this);
}

void		Brain::set_Ideas(std::string idea){
	
}

std::string	Brain::get_Ideas(int i) const{
	return (_ideas[i]);
}
