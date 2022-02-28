/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:19:42 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/28 16:03:26 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat(void) {
    this->_type = "Cat";
	this->_brain_cat = new Brain;
    std::cout << _type << " default constructor called" << std::endl;
}

Cat::Cat(Cat const & cat_copy) : Animal(cat_copy._type){
	*this = cat_copy;
	delete _brain_cat;
	_brain_cat = new Brain(*cat_copy._brain_cat);
	for (int i = 0; i < 100; i++){
		setIdeas(i, cat_copy.getIdeas(i));
	}
    std::cout << "Cat copy called" << std::endl;
}

Cat::~Cat(){
    delete _brain_cat;
    std::cout << "Cat destructor called" << std::endl;   
}

Cat & Cat::operator=(Cat const & cat_op){
    std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = cat_op.getType();
	
	delete _brain_cat;
	_brain_cat = new Brain(*cat_op._brain_cat);
	for (int i = 0; i < 100; i++)
		setIdeas(i, cat_op.getIdeas(i));
	return (*this);
}

Animal & Cat::operator=(Animal const & animal_op){
    std::cout << "Animal copy assignment operator for cat called" << std::endl;
	this->_type = animal_op.getType();
	for (int i = 0; i < 100; i++)
		setIdeas(i, animal_op.getIdeas(i));
	
	return (*this);
}

void	Cat::makeSound() const{
    std::cout << _type << " : meow meow" << std::endl;
}

// fcts get et set pour récupérer l'idée du brain et la donner au Cat
// ou récupérer directement le brain créé : Brain *Cat::get_idea()
// = renvoyer un pointeur sur un objet brain (avec l'idée envoyée par le numéro du main) pour un objet Cat

std::string	Cat::getIdeas(int i) const{
	return (_brain_cat->get_Ideas(i));
}

void	Cat::setIdeas(int i, std::string idea){
	this->_brain_cat->set_Ideas(i, idea);
}