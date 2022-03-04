/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/04 18:00:19 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void){

	std::cout << std::endl;

	try {         
		Bureaucrat    second("Astrid", 8);         
		PresidentialPardonForm    secondForm("second form");                  
		std::cout << second << std::endl;         
		std::cout << secondForm << std::endl;         
		second.signForm(secondForm);         
		second.executeForm(secondForm);         
		second.gradeUp();         
		second.signForm(secondForm);         
		second.executeForm(secondForm);     
		}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	} 

	try {         
		Bureaucrat    third("Lucie", 80);         
		RobotomyRequestForm    thirdForm("third form");                  
		std::cout << third << std::endl;         
		std::cout << thirdForm << std::endl;         
		third.signForm(thirdForm);         
		third.executeForm(thirdForm);         
		third.gradeUp();         
		third.signForm(thirdForm);         
		third.executeForm(thirdForm);     
		}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	} 

	std::cout << std::endl;
	
	return (0);
}