/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:48:11 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/04 13:46:09 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
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
	void	print_phonebook(void);
	int		ft_digit(std::string str);
//	void	print_info(int index);

	private: // attributs non modifiables directement par l'utilisateur
	Contacts	contacts[9];
	int			count; // compteur de 1 a 8
};

#endif