/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:05:21 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/13 18:33:37 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){

}

Karen::~Karen(void){
    
}

void	Karen::complain(std::string level){
	//http://sdz.tdct.org/sdz/c-les-pointeurs-sur-fonctions.html
	// *complaint[] = ptr sur une liste de fcts
	// sur le modèle int (A::*ptr)(int) = &A::fonction; mais ici nécessité d'une liste de fcts
	// = nom de la classe::*pointeur (le type de fct de plainte sur lequel on va aller pointer) = adresse de la fct à appeler 
	void	(Karen::*ptr_complain[])(void) = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error
	};
	// initialiser les levels de complaintes
	std::string	complaint_level[] = {"debug", "info", "warning", "error"};
	// boucle qui va checker le type de level en fct de la string envoyée par le main
	for (int i = 0; i < 4; i++)
	{
		// si level = complaint_level, je fais pointer sur la fct associée
		//*ptr_complain = complaint_level[i];
		if (level == complaint_level[i]){
			(this->*ptr_complain[i])();
			return ;
		}
	}
	// sinon msg d'erreur (choix perso)
	std::cout << "No complaint, what is happening to Karen?" << std::endl;	
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