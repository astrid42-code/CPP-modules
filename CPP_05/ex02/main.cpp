/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/05 11:31:50 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void){

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