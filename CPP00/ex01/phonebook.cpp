/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/04 18:56:20 by astridgault      ###   ########.fr       */
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
		this->count = 0;
		this->contacts[this->count].set_contact(this->count);
		contacts[this->count].get_contact();
		this->count++;
	}
}

void	Phonebook::search(void)
{
	std::string	str;
//	char		*cstr;
	int			index;
	
//	cstr = NULL;
	index = -1;
	if (this->count == 0){
		std::cout << "Sorry, you have no friends :(" << std::endl;
		return ;
	}
	// fct qui va afficher les contacts rentrés avec seulement 4 infos
	else
		print_phonebook();
	// demander à l utilisateur de rentrer le n° d un contact
	while (ft_digit(str) != 0 || str.empty()){
		std::cout << "Please enter index id" << std::endl;
		std::getline(std::cin, str);
		if (str.empty() || ft_digit(str) != 0)
			std::cout << "Please enter a number" << std::endl;
		if (ft_digit(str) == 0)
			index = atoi(str.c_str());
		if (index <= 0 || index > this->count){
			std::cout << "This index is out of range, please do it again" << std::endl;
			std::cin >> index;
		}
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

int	Phonebook::ft_digit(std::string str)
{
	int i;

	i = 0;
	while (str[i]){
		if (str[i] <= '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}