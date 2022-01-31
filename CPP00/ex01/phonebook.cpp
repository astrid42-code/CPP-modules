/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/01/31 17:29:17 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
	count = 0; // ou this->count = 0??	
}

Phonebook::~Phonebook(){	
}

void	Phonebook::add(void)
{

	count++;
	if (count >= 8){
		std::cout << "There is no more place" << std::endl;
	}	
}