/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:36:02 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/02 16:41:01 by astridgault      ###   ########.fr       */
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
	std::cout << this->_index << this->_first_name << _last_name << _nickname << _phone_number << _darkest_secret << std::endl;
}