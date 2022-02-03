/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/03 14:40:23 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
	this->count = 0; // initialiser count à 0 pour l'instance courante
    //this->xxx()  > appellera la fct xxx dans l'instance courante	
    return ;
}

Phonebook::~Phonebook(){	
}

void	Phonebook::add(void)
{
	if (this->count < 8){
		this->contacts[this->count].set_contact(this->count);
		contacts[this->count].get_contact();
		this->count++;
	}
	else {
		this->count = 7;
		this->contacts[this->count].set_contact(this->count);
		contacts[this->count].get_contact();
		this->count++;
	}
}

void	Phonebook::search(void)
{
	int	index;
	
	// fct qui va afficher les contacts rentrés avec seulement 4 infos
	print_phonebook();
	// demander à l utilisateur de rentrer le n° d un contact
	std::cout << "Please enter index id" << std::endl;
	std::cin >> index;
	while (index <= 0 || index > this->count){
		std::cout << "This index is out of range, please do it again" << std::endl;
		std::cin >> index;
	}
	// afficher toutes les infos du contact demandé (presentation libre)
	index--;
	this->contacts[index].print_index();
}

void	Phonebook::print_phonebook(void){
	std::cout << " __________ __________ __________ __________ " << std::endl;
	std::cout << "| index     first name last name   nickname |" << std::endl;
	std::cout << " __________ __________ __________ __________ " << std::endl;
	for (int i = 0; i < this->count; i++){ // this pas obligatoire car on est dans la classe phonebook (?)
			std::cout << "|";
			this->contacts[i].print_contacts(); // this obligatoire car pas dans la classe contacts(?)
			std::cout << std::endl;
	}
	// pb : saute une ligne en trop à la fin
	std::cout << " __________ __________ __________ __________ " << std::endl;
}
