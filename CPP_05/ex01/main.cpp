/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/03 14:07:01 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void){
	try{
		std::cout << "TEST 1" << std::endl;
		Form form1("form1", 42, 70);
		std::cout << form1 << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try{
		std::cout << "TEST 2" << std::endl;
		Form form2("form2", 0, 70);
		std::cout << form2 << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try{
		std::cout << "TEST 3" << std::endl;
		Form form3("form3", 140, 70);
		std::cout << form3 << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try{
		std::cout << "TEST 4" << std::endl;
		Form form4("form4", 14, 70);

		Bureaucrat bur1("bur1", 16);
		bur1.signForm(form4);
		std::cout << form4 << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try{
		std::cout << "TEST 5" << std::endl;
		Form form5("form5", 14, 70);

		Bureaucrat bur2("bur2", 10);
		bur2.signForm(form5);
		std::cout << form5 << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try{
		std::cout << "TEST 6" << std::endl;
		Form form6("form6", 142, 70);
		Bureaucrat bur3("bur3", 160);
		bur3.signForm(form6);
		std::cout << form6 << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	return (0);
}