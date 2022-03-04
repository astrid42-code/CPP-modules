/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:54:57 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/04 17:56:35 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target){
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > 72){
		throw Bureaucrat::GradeTooLowException();
	}
}


std::string		RobotomyRequestForm::getTarget() const{
	return (_target);
}

// faire les autres getters

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &form_op){
	_target = form_op._target;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm & rob_op){
	o
	<< rob_op.getTarget() << std::endl;
	return (o);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() >= 1 && executor.getGrade() <= 45){ // recuperer grade du bureaucrat
		std::cout << "BZZZZZZZ BZZZZZZ" << std::endl;
		if (rand() % 2)
			std::cout << _target << " has been robotomysed with success." << std::endl;
		else
			 std::cout << _target << " has not been robotomysed." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}