/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:48:11 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/01 14:31:16 by astridgault      ###   ########.fr       */
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
	~Phonebook();

	// methodes :
	// creer un tableau de contacts?
	void	add(void);
	void	search(void);

	private: // attributs non modifiables directement par l'utilisateur
//	Contacts	contacts[8];
	int			count; // compteur de 0 a 7
};

#endif