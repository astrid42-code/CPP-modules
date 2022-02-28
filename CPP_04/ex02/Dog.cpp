/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/28 16:05:31 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->_type  = "Dog";
	_brain_dog = new Brain;
    std::cout << _type << " constructor called" << std::endl;
}

Dog::Dog(Dog const & dog_copy) : Animal(dog_copy._type) {
	*this = dog_copy;
	_brain_dog = new Brain(*dog_copy._brain_dog);
	for (int i = 0; i < 100; i++){
		setIdeas(i, dog_copy.getIdeas(i));
	}
    std::cout << "Dog copy called" << std::endl;
}

Dog::~Dog(){
    delete _brain_dog;
    std::cout << "Dog destructor called" << std::endl;   
}

Dog & Dog::operator=(Dog const & dog_op){
    std::cout << "Dog copy assignment operator called" << std::endl;

	_type = dog_op.getType();

	for (int i = 0; i < 100; i++)
		setIdeas(i, dog_op.getIdeas(i));
	return (*this);
}
Animal & Dog::operator=(Animal const & animal_op){
    std::cout << "Dog copy assignment operator called" << std::endl;

	_type = animal_op.getType();

	for (int i = 0; i < 100; i++)
		setIdeas(i, animal_op.getIdeas(i));

	return (*this);
}

void	Dog::makeSound() const{
    std::cout << _type << " : waf waf" << std::endl;
}

std::string	Dog::getIdeas(int i) const{
	return (_brain_dog->get_Ideas(i));
}

void	Dog::setIdeas(int i, std::string idea){
	this->_brain_dog->set_Ideas(i, idea);
}
