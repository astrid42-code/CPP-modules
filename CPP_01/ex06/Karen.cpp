/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:39:56 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/15 18:09:47 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){

}

Karen::~Karen(void){
    
}

void	Karen::complain(std::string level){
	int	index = 0;
	const char *complaint_type = "DIWE";
	
	void	(Karen::*ptr_complain[])(void) = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error
	};
	
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
		index = 4;
	else{
		for (int i = 0; i < 4; i++){
			if (level[0] == complaint_type[i]){
				index = i;
				break;
			}
		}
	}
	switch (index){
		case 0 : {
			for (int i = index; i < 4; i++){
				(this->*ptr_complain[index++])();
			}
		}
		break;
		case 1 : {
			for (int i = index; i < 4; i++){
				(this->*ptr_complain[index++])();
			}
		}
		break;
		case 2 : {
			for (int i = index; i < 4; i++){
				(this->*ptr_complain[index++])();
			}
		}
		break;
		case 3 : (this->*ptr_complain[index])();
		break;
		default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Karen::debug( void ){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Karen::info( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Karen::warning( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
