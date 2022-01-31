/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:48:11 by asgaulti          #+#    #+#             */
/*   Updated: 2022/01/31 15:12:57 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contacts.hpp"

class Phonebook // ou Contacts et phonebook dans une autre classe?
{
	public:
	Phonebook();

	// methodes :
	// creer un tableau de contacts?
	

	private: // attributs non modifiables directement par l'utilisateur
	Contacts contacts[8];	
};

#endif