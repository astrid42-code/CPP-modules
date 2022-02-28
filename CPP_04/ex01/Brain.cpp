/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:56 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/28 15:59:36 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i += 4){
		_ideas[0 + i] = "Let's eat, dude";
		_ideas[1 + i] = "I could eat a human";
		_ideas[2 + i] = "What do we have for diner tonigth ?";
		_ideas[3 + i] = "I'm so clever";
	}
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

void	Brain::set_Ideas(int i, std::string idea){
	if (i < 0 || i > 99){
		std::cout << "Error" << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}

std::string	Brain::get_Ideas(int i) const{
	if (i < 0 || i > 99)
		return ("Error");
	return (_ideas[i]);
}
