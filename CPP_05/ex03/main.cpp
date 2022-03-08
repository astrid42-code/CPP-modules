/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/08 19:41:13 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


// bien vérifier qu'il n'y a pas de leaks

int	main(void){

    Bureaucrat chief = Bureaucrat("chief", 1);
	Intern maxime;

	std::cout << "########### 1st TEST ###########" << std::endl;
	try{
		Form *form = maxime.makeForm("robotomy request", "Bender");
		chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

    std::cout << "########### 2nd TEST (failure) ###########" << std::endl;
	try
	{
		Form *form = maxime.makeForm("error form", "chief");
        delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
    //Form existente robot
    std::cout << "########### 3rd TEST ###########" << std::endl;
    try
	{
		Form *form = maxime.makeForm("robotomy request", "chief");
        chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

    std::cout << "########### 4th TEST ###########" << std::endl;
    try
	{
		Form *form = maxime.makeForm("shrubbery creation", "chief");
        chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
   	std::cout << "########### 5th TEST ###########" << std::endl;
    try
	{
		Form *form = maxime.makeForm("presidential pardon", "chief");
        chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
/*
// tests avec un chief moins fort
int	main(void){

    Bureaucrat chief = Bureaucrat("chief", 42);
	Intern maxime;
	
	std::cout << "########### 1st TEST ###########" << std::endl;
	try{
		Form *form = maxime.makeForm("robotomy request", "Bender");
		chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

    std::cout << "########### 2nd TEST (failure) ###########" << std::endl;
	try
	{
		Form *form = maxime.makeForm("Random Form", "chief");
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

    std::cout << "########### 3rd TEST ###########" << std::endl;
    try
	{
		Form *form = maxime.makeForm("robotomy request", "chief");
        chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
    
	std::cout << "########### 4th TEST ###########" << std::endl;
    try
	{
		Form *form = maxime.makeForm("shrubbery creation", "chief");
        chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
    std::cout << "########### 5th TEST ###########" << std::endl;
    try
	{
		Form *form = maxime.makeForm("presidential pardon", "chief");
        chief.signForm(*form);
		chief.executeForm(*form);
		delete form;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
*/