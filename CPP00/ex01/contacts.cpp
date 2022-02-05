/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:36:02 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/04 18:54:44 by astridgault      ###   ########.fr       */
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
	unsigned long	i;

	i = 0;
	std::locale loc;
	this->_index = count;
	std::cout << "first name : ";
	std::getline(std::cin, _first_name);
	std::cout << "last name : ";
	std::getline(std::cin, _last_name);
	std::cout << "nickname : ";
	std::getline(std::cin, _nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, _phone_number);
	while (i < _phone_number.size()){
		while (isdigit(_phone_number[i], loc) != 1 || _phone_number.size() > 10){
			std::cout << "error : please use only digit and less than 10 characters" << std::endl;
			std::cout << "phone number : ";
			std::getline(std::cin, _phone_number);
		}
		i++;
	}
	// if phone_number != 0 à 9  et si plus de 10 chiffres> erreur, réécrire?
	std::cout << "darkest secret : ";
	std::getline(std::cin, _darkest_secret);
	//std::cout << this->_index << this->_first_name << _last_name << _nickname << _phone_number << _darkest_secret << std::endl;
}

void	Contacts::get_contact(void) const{
	std::cout << _index << _first_name << _last_name << _nickname << _phone_number << _darkest_secret << std::endl;
}

void	Contacts::print_contacts(void) const{
	std::string	cpy1;
	std::string	cpy2;
	std::string	cpy3;

	std::cout << "         " << _index + 1 << "|";
	if (_first_name.length() > 10){
		cpy1 = _first_name.substr(0, 9);
		std::cout << cpy1 << ".";
	}
	else{
		for (int i = 0; i + _first_name.length() < 10; i++)
			std::cout << " ";
		std::cout << _first_name;
	}
	std::cout << "|";
	if (_last_name.length() > 10){
		cpy2 = _last_name.substr(0, 9);
		std::cout << cpy2 << ".";
	}
	else{
		for (int i = 0; i + _last_name.length() < 10; i++)
			std::cout << " ";
		std::cout << _last_name;
	}
	std::cout << "|";
	if (_nickname.length() > 10){
		cpy3 = _nickname.substr(0, 9);
		std::cout << cpy3 << ".";
	}
	else{
		for (int i = 0; i + _nickname.length() < 10; i++)
			std::cout << " ";
		std::cout << _nickname;
	}
	std::cout << "|";
}

void	Contacts::print_index(void) const{
	std::cout << "first name : " << _first_name << std::endl;
	std::cout << "last name : " << _last_name << std::endl;
	std::cout << "nickname : " << _nickname << std::endl;
	std::cout << "phone number : " << _phone_number << std::endl;
	std::cout << "darkest secret : " << _darkest_secret << std::endl;
}