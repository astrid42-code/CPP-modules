/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:39:56 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/12 18:28:50 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){

}

Karen::~Karen(void){
    
}

void	Karen::complain(std::string level){
	void	(Karen::*ptr_complain[])(void) = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error
	};
	std::string	complaint_level[] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
		(level = complaint_level[i]);
		switch (i){
			case 0 : while (i < 4){
					(this->*ptr_complain[i++])();
					//i++;
				};
			case 1 : while (i < 4){
					(this->*ptr_complain[i++])();
					//i++;
				};
			case 2 : while (i < 4){
					(this->*ptr_complain[i++])();
					//i++;
				};
			case 3 : (this->*ptr_complain[i])();
			default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}	
}

void Karen::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Karen::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Karen::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error( void ){
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}