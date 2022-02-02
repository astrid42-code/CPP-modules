/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:36:02 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/02 12:43:21 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"

Contacts::Contacts(){
	_index = 0;
	//std::cout << _index << _phone_number << std::endl;
}

Contacts::~Contacts(){
	
}

void	Contacts::set_contact(int count){
//	char	*fn;
//	char	*ln;
//	char	*nn;
//	char	*pn;
//	char	*ds;

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
	/*
	i = _index;
	i++;
	std::cout << "first name : ";
	std::cin >> fn;
	std::cout << "last name : ";
	std::cin >> ln;
	std::cout << " nickname : ";
	std::cin >> nn;
	std::cout << "phone number : ";
	std::cin >> _phone_number;
	while (_phone_number.size() > 10){
		std::cout << "error : please use less than 10 characters" << std::endl;
		std::cout << "phone number : ";
		std::cin >> pn;
	}
	// if phone_number != 0 à 9  et si plus de 10 chiffres> erreur, réécrire?
	std::cout << "darkest secret : ";
	std::cin >> ds;
	this->_index = i;
	this->_first_name = fn;
	this->_last_name = ln;
	this->_nickname = nn;
	this->_phone_number = pn;
	this->_darkest_secret = ds;
	this->_index++;*/
}

void	Contacts::get_contact(void) const{
	std::cout << _index << _first_name << _last_name << _nickname << _phone_number << _darkest_secret << std::endl;
}