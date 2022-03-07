/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:53:07 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/07 16:32:14 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target){
			
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy_shrub){
	*this = copy_shrub;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrub_op){
	_target = shrub_op._target;
	Form::operator=(shrub_op);
	return (*this);
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm & shrub_op){
	o
	<< shrub_op.getTarget();
	return (o);
}

const std::string	& ShrubberyCreationForm::getTarget() const{
	return (_target);
}

const char *ShrubberyCreationForm::openException() const throw(){
	return ("File can't be opened\n");
}

void	ShrubberyCreationForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > 145){
		throw Bureaucrat::GradeTooLowException();
	}
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream	output_file;
	
	if (executor.getGrade() >= 1 && executor.getGrade() <= 137){ // recuperer grade du bureaucrat
	
		output_file.open((_target + ".ShrubberyCreationForm").c_str());
		if (!output_file.is_open()){
			throw openException();
		}
		
		else{
			output_file << "      _-_	"<< std::endl;
			output_file << "    /~~   ~~\\ " << std::endl;
			output_file << " /~~         ~~\\ " << std::endl;
			output_file << "{               } " << std::endl;
			output_file << " \\  _-     -_  / " << std::endl;
			output_file << "   ~   \\ /  ~ " << std::endl;
			output_file << "_- -   | | _- _ " << std::endl;
			output_file << "  _ -  | |   -_ " << std::endl;
			output_file << "       / \\ " << std::endl;

			output_file.close();
				
			}
	}
	else{
		std::cout << executor.getName() << ", grade " << executor.getGrade() << " couldn't execute ";
		std::cout << _target << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}

