/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/07 14:59:32 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){

	std::cout << "########### 1st TEST ###########" << std::endl;
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
	
	std::cout << std::endl;
	
	std::cout << "########### 2nd TEST ###########" << std::endl;
	first = Bureaucrat("Julien", 150); 
	std::cout << first << " has first form to sign and execute." << std::endl;
	       
	try{
		first.signForm(firstForm);         
		first.executeForm(firstForm);
	}
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	std::cout << "########### 3rd TEST ###########" << std::endl;
	Bureaucrat    second("Astrid", 2);         
	PresidentialPardonForm    secondForm("second form");
	std::cout << second << " has " << secondForm << " to sign and execute." << std::endl;              
	
	try {               
		second.signForm(secondForm);         
		second.executeForm(secondForm);        
	}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	}
	
	std::cout << std::endl;
	
	std::cout << "########### 4th TEST ###########" << std::endl;
	second = Bureaucrat("Astrid", 42);
	std::cout << second << " has " << secondForm << " to sign and execute." << std::endl; 
	
	try {               
		second.signForm(secondForm);         
		second.executeForm(secondForm);        
	}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	}    

	std::cout << std::endl;
	
	std::cout << "########### 5th TEST ###########" << std::endl;
	Bureaucrat    third("Lucie", 10);         
	RobotomyRequestForm    thirdForm("third form");                  
	std::cout << third << " has " << thirdForm << " to sign and execute."<< std::endl;         
	
	try {         
		third.signForm(thirdForm);         
		third.executeForm(thirdForm);         
		}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	} 

	std::cout << std::endl;
	
	std::cout << "########### 6th TEST ###########" << std::endl;
	third = Bureaucrat("Lucie", 138);
	std::cout << third << " has " << thirdForm << " to sign and execute."<< std::endl;

	try {         
		third.signForm(thirdForm);         
		third.executeForm(thirdForm);         
		}     
		
	catch (std::exception const &e) {         
		std::cerr << e.what() << std::endl;     
	}

	std::cout << std::endl;
	
	return (0);
}

// pk le try catch ne sort pas quand on ne peut pas signer (il fait quand meme l'execute)