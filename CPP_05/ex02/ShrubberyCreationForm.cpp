/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:53:07 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/05 17:46:53 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target){
			
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
/*
std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm & shrub_op){
	o
	<< shrub_op.getTarget();
	return (o);
}
*/
void	ShrubberyCreationForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > 145){
		throw Bureaucrat::GradeTooLowException();
	}
}

const char *ShrubberyCreationForm::openException() const throw(){
	return ("File can't be opened\n");
}

const char *ShrubberyCreationForm::writeException() const throw(){
	return ("File can't be written\n");
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() >= 1 && executor.getGrade() <= 137){ // recuperer grade du bureaucrat
		std::ofstream	output_file; // la sortie
	
		output_file.open("tree.txt";
		// verifier que l'ouverture est réussie:
		if (!output_file.is_open()){
			throw openException();
		}
		else{
			// imprimer l'arbre
			output_file << std::endl;
			// si pb à l'impression : fermer le fichier et throw writeException();
			output_file.close();
		}
	}
	else{
		std::cout << executor.getName() << ", grade " << executor.getGrade() << " couldn't execute ";
		std::cout << _target << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}

