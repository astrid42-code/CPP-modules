/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:43:19 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/07 18:14:44 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() : Form(){
}
		
Intern::Intern(const Intern &copy_intern){
	*this = copy_intern;
}
		
Intern::~Intern(){
}

Intern & Intern::operator=(const Intern &intern_op){
	_target = intern_op._target;
	return (*this);
}

std::string	Intern::getName(){
	return (_name);
}

// std::string	Intern::getTarget(){
// 	return (_target);
// }


Form	*Intern::makeForm(std::string name, std::string target){
	
	Form	*(Intern::*ptr_Form[3])(target) = {
			&Intern::robotomy, &Intern::presidential, &Intern::shrubbery
		};
	// initialiser les types de forms
	std::string	form_type[] = {"RobotomyRequestForm", "PresidentialPardonFrom", "ShrubberyCreationForm", "error"};
	// boucle qui va checker le type de level en fct de la string envoyée par le main
	for (int i = 0; i < 4; i++)
	{
		// si level = complaint_level, je fais pointer sur la fct associée
		//*ptr_complain = complaint_level[i];
		if (_name == form_type[i]){
			// (this->*ptr_Form[i])();
			return (std::cout << "Intern creates " << (this->*ptr_Form[i])(target) << std::endl);
		}
	}
	throw Intern::FailureException();
	//std::cout << "Intern creates " << un nouveau formulaire (avec new, donc penser a delete ensuite) << std::endl;
	// else
	// throw un msg d'erreur
}

const char *Intern::FailureException::what() const throw(){
	return ("This form doesn't exist");
}

Form	*Intern::robotomy(std::string const &target){
	return (new RobotomyRequestForm(_target));
	// Form * robot = new RobotomyRequestForm();
	// std::cout << "Intern creates " << robot->getName() << std::endl;
}

Form	*Intern::presidential(void){
	Form * robot = new PresidentialPardonForm();
	std::cout << "Intern creates " << robot->getName() << std::endl;
}

Form	*Intern::shrubbery(void){
	Form * robot = new ShrubberyCreationForm();
	std::cout << "Intern creates " << robot->getName() << std::endl;
}


// ou et comment utiliser la target??? elle sert a quoi?