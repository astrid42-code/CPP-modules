/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:40:18 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/03 13:50:40 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void){

	std::cout << std::endl;

	try{
		std::cout << "TEST 6" << std::endl;
		Form form6("form6", 142, 70);
		Bureaucrat bur3("intern3", 160);
		bur3.signForm(form6);
		std::cout << form6 << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	return (0);
}