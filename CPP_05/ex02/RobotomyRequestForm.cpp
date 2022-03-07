/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:54:57 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/07 16:31:52 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target){
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robot_cp){
	*this = robot_cp;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &robot_op){
	_target = robot_op._target;
	Form::operator=(robot_op);
	return (*this);
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm & robot_op){
	o
	<< robot_op.getTarget();
	return (o);
}

std::string		RobotomyRequestForm::getTarget() const{
	return (_target);
}

void	RobotomyRequestForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > 72){
		throw Bureaucrat::GradeTooLowException();
	}
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() >= 1 && executor.getGrade() <= 45){ // recuperer grade du bureaucrat
		std::cout << "BZZZZZZZ BZZZZZZ" << std::endl;
		if (rand() % 2)
			std::cout << _target << " has been robotomysed with success." << std::endl;
		else
			 std::cout << _target << " has not been robotomysed." << std::endl;
	}
	else{
		std::cout << executor.getName() << " couldn't execute ";
		std::cout << _target << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}
