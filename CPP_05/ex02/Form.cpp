/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:18:56 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/07 14:40:23 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _grade_sign(0), _grade_exec(0) {
	_sign = false;
}

Form::Form(std::string name, int grade_sign, int grade_exec) :
	_name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec){
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw Bureaucrat::GradeTooLowException();
	_sign = true;
}

Form::Form(const Form &copy_form) : 
	_name(copy_form._name), _grade_sign(copy_form._grade_sign), _grade_exec(copy_form._grade_exec){
}

Form::~Form(){
}

Form & Form::operator=(const Form &form_op){
	_name = form_op._name;
	_sign = form_op._sign;
	_grade_sign = form_op._grade_sign;
	_grade_exec = form_op._grade_exec;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Form & form_op){
	o
	<< form_op.getName();
	// << (form_op.getSign() ? " validated" : " not validated") << std::endl;
	return (o);
}

const std::string	& Form::getName() const{
	return (_name);
}
bool	Form::getSign() const{
	return (_sign);
}

int	Form::getGradeSign() const{
	return (_grade_sign);
}

int	Form::getGradeExec() const{
	return (_grade_exec);
}

const char	*Form::GradeTooHighException::what() const throw(){
	return ("the grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("the grade is too low");
}