/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:56:19 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/04 18:11:52 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target){
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &form_op){
	_target = form_op._target;
	return (*this);
}


std::ostream & operator<<(std::ostream & o, PresidentialPardonForm & pres_op){
	o
	<< pres_op.getTarget();
	return (o);
}

std::string		PresidentialPardonForm::getTarget() const{
	return (_target);
}

// faire les autres getters

void	PresidentialPardonForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > 25){
		throw Bureaucrat::GradeTooLowException();
	}
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() >= 1 && executor.getGrade() <= 5){ // recuperer grade du bureaucrat
		std::cout << _target << " has been excused by Zaphod Beeblebrox." << std::endl;
	}
	else{
		std::cout << executor.getName() << " couldn't execute ";
		std::cout << _target << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}