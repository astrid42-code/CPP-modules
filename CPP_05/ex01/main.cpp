/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/01 21:03:12 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	// try = je vais essayer de faire kk chose
	// si ça rate : lancer l'exception > throw std::exception();
	// qui va être récupérée et géré dans le bloc catch
	try{
		std::cout << "TEST 1" << std::endl;
		Bureaucrat	bureaucrat1("Romain", 155);
		//Bureaucrat	bureaucrat_cp(bureaucrat1);

		std::cout << bureaucrat1 << std::endl;
		//std::cout << bureaucrat_cp << std::endl;
		
		bureaucrat1.gradeDown();
	}
	catch (std::exception& e){
    	std::cout << "exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try{
		std::cout << "TEST 2" << std::endl;
		Bureaucrat	bureaucrat1("Romain", 150);

		std::cout << bureaucrat1 << std::endl;
		
		bureaucrat1.gradeDown();
	}
	catch (std::exception& e){
    	std::cout << "exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try{
		std::cout << "TEST 3" << std::endl;
		Bureaucrat	bureaucrat2("Simon", 15);
		std::cout << bureaucrat2 << std::endl;
		bureaucrat2.gradeDown();
	}
	catch (std::exception& e){
    	std::cout << "exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try{
		std::cout << "TEST 4" << std::endl;
		Bureaucrat	bureaucrat3("Elise", 0);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.gradeUp();
	}
	catch (std::exception& e){
    	std::cout << "exception caught: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try{
		std::cout << "TEST 5" << std::endl;
		Bureaucrat	bureaucrat4("Sarah", 100);
		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.gradeUp();
	}
	catch (std::exception& e){
    	std::cout << "exception caught: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;	
	
	try{
			std::cout << "TEST 6" << std::endl;
			Bureaucrat	bureaucrat4("Sarah", 1);
			std::cout << bureaucrat4 << std::endl;
			bureaucrat4.gradeUp();
		}
	catch (std::exception& e){
		std::cout << "exception caught: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	return (0);
}