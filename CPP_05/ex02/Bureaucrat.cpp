/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:48:59 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/04 18:13:33 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(1) {	
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
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bur_op){
	// ne pas mettre le _name car c'est un const?
	_grade = bur_op._grade;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & bur_op){
	o
	<< bur_op.getName() << ", bureaucrat grade " << bur_op.getGrade();
	return (o);
}

std::string	Bureaucrat::getName() const{
	return (_name);
}

int	Bureaucrat::getGrade() const{
	return (_grade);
}

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

void	Bureaucrat::signForm(Form &form){
	// nécessaire de faire un try catch pour throw l'exception en cas d'échec
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e){
		std::cout << _name << " couldn't sign " << form.getName(); // pb : le form n'a pas de nom ici (comment le recuperer???)
		std::cout << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form){
	form.execute(*this);
	std::cout << _name << " executed " << form.getName() << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("the grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("the grade is too low");
}