/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:48:59 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/03 11:34:46 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(0) {	
}

Bureaucrat::Bureaucrat(std::string name, int i) : _name(name){
	// 1ere vérif d'erreur (le grade est-il correct à la construction)
	// si < 0 : throw (=renvoi dans le catch) le retour de GradeTooHighException
	// si > 250 : idem avec le GradeTooLowException
	// sinon récupérer le grade donné
	if (i > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (i < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = i;
//	std::cout << "Hi, my name is " << _name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy_b){
	*this = copy_b;
}

Bureaucrat::~Bureaucrat(){
	std:: cout << "Your grade is : " << _grade << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bur_op){
	// ne pas mettre le _name car c'est un const?
	_grade = bur_op._grade;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & bur_op){
	o
	<< bur_op.getName() << ", bureaucrat grade "
	<< bur_op.getGrade() << "." << std::endl;
	return (o);
}

std::string	Bureaucrat::getName() const{
	return (_name);
}

int	Bureaucrat::getGrade() const{
	return (_grade);
}

// 2ème vérif : incrémenter ou décrémenter 
// puis renvoyer le throw TooHigh ou TooLow si grade - 1 ou + 1 hors limite
// OU _grade++ / --  si ok
int	Bureaucrat::gradeDown(){
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return (_grade);
}

int	Bureaucrat::gradeUp(){
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return (_grade);
}
