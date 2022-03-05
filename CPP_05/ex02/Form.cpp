/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:18:56 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/05 11:58:52 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _grade_sign(0), _grade_exec(0) {
	_sign = false;
}

Form::Form(std::string name, int grade_sign, int grade_exec) :
	_name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec){
	// vérifier que les grade_sign et _exec sont compris entre 1 et 150 (sinon throw exception toohigh/low)
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
	std::cout << "hey" << _name << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Form & form_op){
	o
	<< form_op.getName();
	// << (form_op.getSign() ? " validated" : " not validated") << std::endl;
	return (o);
}

std::string	Form::getName() const{
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

void	Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > _grade_sign){
		_sign = false;
		throw Form::GradeTooLowException();
	}
	_sign = true;
}

const char	*Form::GradeTooHighException::what() const throw(){
	return ("the grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("the grade is too low");
}