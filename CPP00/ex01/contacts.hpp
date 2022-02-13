/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:48:23 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 20:21:22 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

# include <iostream>
# include <string>
# include <locale> 
# include <stdio.h>
# include <stdlib.h>

class Contacts
{
	public:
	Contacts();
	~Contacts();

	void	set_contact(int count);
	void	get_contact(void) const;
	void	print_contacts(void) const;
	void	print_index(void) const;
	
	private:
	int	_index; // numero du contact (demarrer a 1)
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif