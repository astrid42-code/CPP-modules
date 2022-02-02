/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/02 15:22:52 by astridgault      ###   ########.fr       */
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
	if (count >= 8){
		std::cout << "There is no more place" << std::endl;
	}
    this->contacts[this->count].set_contact(this->count);
    //contacts[this->count].get_contact();
	this->count++;
    //std::cout << count << std::endl;
}