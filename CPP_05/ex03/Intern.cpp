/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:43:19 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/08 12:19:07 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
// #include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

// fct static contenant le ptr sur les 3 fcts
createForm	Intern::ptrForm[3] = {
	&Intern::robotomy, &Intern::presidential, &Intern::shrubbery
};

Intern::Intern(){
}
		
Intern::Intern(const Intern &copy_intern){
	(void)copy_intern;
}
		
Intern::~Intern(){
}

Intern & Intern::operator=(const Intern &intern_op){
	(void)intern_op;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target){
	
	// initialiser les types de forms
	std::string	form_type[] = {"RobotomyRequestForm", "PresidentialPardonFrom", "ShrubberyCreationForm", "error"};
	// boucle qui va checker le type de level en fct de la string envoyée par le main
	for (int i = 0; i < 3; i++)
	{
		// si level = complaint_level, je fais pointer sur la fct associée
		//*ptr_complain = complaint_level[i];
		if (name == form_type[i]){
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*ptrForm[i])(target));
		}
	}
	std::cout << "Intern can't create this form" << std::endl;
	// throw Intern::FailureException();
	return (NULL);
	// else
	// throw un msg d'erreur
}

// const char *Intern::FailureException::what() const throw(){
// 	return ("This form doesn't exist");
// }

Form	*Intern::robotomy(std::string const &target){
	return (new RobotomyRequestForm(target));
	// Form * robot = new RobotomyRequestForm();
	// std::cout << "Intern creates " << robot->getName() << std::endl;
}

Form	*Intern::presidential(std::string const &target){
	return (new PresidentialPardonForm(target));
}

Form	*Intern::shrubbery(std::string const &target){
	return (new ShrubberyCreationForm(target));
}
