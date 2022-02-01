/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:48:23 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/01 14:24:15 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

# include <iostream>
# include <string>
class Contacts
{
	public:
	Contacts();
	~Contacts();

	void	set_contact(void);
	
	private:
	int	index; // numero du contact (demarrer a 1)
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int	phone_number;
	std::string	darkest_secret;
};

#endif