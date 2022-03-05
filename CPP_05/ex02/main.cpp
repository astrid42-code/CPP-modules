/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/05 17:56:53 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){

	Bureaucrat    first("Neo", 12);         
	ShrubberyCreationForm    firstForm("first form");                  

	try {         
		std::cout << first << " has first form to sign and execute." << std::endl;                
		first.signForm(firstForm);         
		first.executeForm(firstForm);          
	}
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	} 
	
	first = Bureaucrat("Julien", 150); 
	std::cout << first << " has first form to sign and execute." << std::endl;        
	try{
		first.signForm(firstForm);         
		first.executeForm(firstForm);
	}
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;
	} 
	// pk ca ne sort pas à la première erreur dans le 2eme test??
	
	std::cout << std::endl;
	
	try {         
		Bureaucrat    second("Astrid", 2);         
		PresidentialPardonForm    secondForm("second form");                  
		std::cout << second << " has " << secondForm << " to sign and execute." << std::endl;                
		second.signForm(secondForm);         
		second.executeForm(secondForm);        
		second = Bureaucrat("Astrid", 42);          
		second.signForm(secondForm);         
		second.executeForm(secondForm);     
		}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	} 

	std::cout << std::endl;
	
	try {         
		Bureaucrat    third("Lucie", 10);         
		RobotomyRequestForm    thirdForm("third form");                  
		std::cout << third << " has " << thirdForm << " to sign and execute."<< std::endl;         
		third.signForm(thirdForm);         
		third.executeForm(thirdForm);         
		// third.gradeUp();         
		third.signForm(thirdForm);         
		third.executeForm(thirdForm);     
		}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	} 

	std::cout << std::endl;
	
	return (0);
}