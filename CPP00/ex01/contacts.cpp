/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:36:02 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/01 15:21:52 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"

Contacts::Contacts(){
	index = 0;
}

Contacts::~Contacts(){
	
}

void	Contacts::set_contact(void){
	index++;
	std::cout << "first name : ";
	std::cin >> first_name;
	std::cout << "last name : ";
	std::cin >> last_name;
	std::cout << " nickname : ";
	std::cin >> nickname;
	std::cout << "phone number : ";
	std::cin >> phone_number;
	// if phone_number != d'un int > erreur, réécrire?
	std::cout << "darkest secret : ";
	std::cin >> darkest_secret;
    //std::cout << first_name << last_name << nickname << phone_number << darkest_secret << std::endl;
}