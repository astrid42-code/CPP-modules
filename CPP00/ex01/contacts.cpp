/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:36:02 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/02 18:46:15 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"

Contacts::Contacts(){
	this->_index = 0;
	//std::cout << _index << _phone_number << std::endl;
}

Contacts::~Contacts(){
	
}

// penser à vérifier que les chaines ne sont pas nulles et que ce sont des lettres et/ou chiffres en fct des variables
void	Contacts::set_contact(int count){
	this->_index = count;
	std::cout << "first name : ";
	std::cin >> _first_name;
	std::cout << "last name : ";
	std::cin >> _last_name;
	std::cout << " nickname : ";
	std::cin >> _nickname;
	std::cout << "phone number : ";
	std::cin >> _phone_number;
	while (_phone_number.size() > 10){
		std::cout << "error : please use less than 10 characters" << std::endl;
		std::cout << "phone number : ";
		std::cin >> _phone_number;
	}
	// if phone_number != 0 à 9  et si plus de 10 chiffres> erreur, réécrire?
	std::cout << "darkest secret : ";
	std::cin >> _darkest_secret;
	//std::cout << this->_index << this->_first_name << _last_name << _nickname << _phone_number << _darkest_secret << std::endl;
}

void	Contacts::get_contact(void) const{
	std::cout << _index << _first_name << _last_name << _nickname << _phone_number << _darkest_secret << std::endl;
}

void	Contacts::print_contacts(void) const{
	std::cout << "         " << _index << "|";
	for (int i = 0; i + _first_name.size() < 10; i++)
		std::cout << " ";
	std::cout << _first_name << "|";
	for (int i = 0; i + _last_name.size() < 10; i++)
		std::cout << " ";
	std::cout << _last_name << "|";
	for (int i = 0; i + _nickname.size() < 10; i++)
		std::cout << " ";
	std::cout << _nickname << "|";
	// à régler : une entrée ne peut dépasser 10 char, sinon couper au 9eme et remplacer le 10eme par un .
	// utiliser une fonction qui coupe au print uniquement mais laquelle?
}