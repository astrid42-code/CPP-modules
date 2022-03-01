/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:48:59 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/01 14:40:17 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {	
}

Bureaucrat::Bureaucrat(std::string name) : _name(name){
	std::cout << "Hi, my name is " << _name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy_b){
	*this = copy_b;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bur_op){
	_name = bur_op._name;
	_grade = bur_op._grade;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & bur_op){
	o
	<< bur_op.getName() << ", bureaucrat grade"
	<< bur_op.getGrade() << "." << std::endl;
	return (o);
}

std::string	Bureaucrat::getName() const{
	return (_name);
}

int	Bureaucrat::getGrade() const{
	return (_grade);
}

int	Bureaucrat::gradeUp(){
	try{
		_grade++;
		if (_grade > 150)
			throw std::exception();
		else
			return (_grade);
	}
	catch (std::exception& e){
    std::cerr << "exception caught: " << e.what() << '\n';
  	}
}

int	Bureaucrat::gradeDown(){
	try{
		_grade--;
	}
	catch (std::exception& e){
    std::cerr << "exception caught: " << e.what() << '\n';
  	}
	return (_grade);
}