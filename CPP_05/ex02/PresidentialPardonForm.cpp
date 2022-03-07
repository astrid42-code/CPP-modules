/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:56:19 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/07 14:40:05 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pres_cp){
	*this = pres_cp;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &pres_op){
	_target = pres_op._target;
	Form::operator=(pres_op);
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
		std::cout << executor.getName() << ", grade " << executor.getGrade() << ", has been excused by Zaphod Beeblebrox." << std::endl;
	}
	else{
		std::cout << executor.getName() << ", grade " << executor.getGrade() << " couldn't execute ";
		std::cout << _target << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}
