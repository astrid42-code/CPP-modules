/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:04:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/02 16:42:22 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
	this->count = 1; // initialiser count à 0 pour l'instance courante
    //this->xxx()  > appellera la fct xxx dans l'instance courante	
    return ;
}

Phonebook::~Phonebook(){	
}

void	Phonebook::add(void)
{
	if (count < 9){
		this->contacts[this->count].set_contact(this->count);
		contacts[this->count].get_contact();
		this->count++;
	}
	else {
		this->count = 8;
		this->contacts[this->count].set_contact(this->count);
		contacts[this->count].get_contact();
	}
}

/*
	if (count < 8){
        this->contacts[this->count].set_contact(this->count);
	    this->count++;
    }
	else if (count == 8){
        count = 7;
        this->contacts[this->count].set_contact(this->count);
    }
    contacts[this->count].get_contact();
    std::cout << count << std::endl;*/