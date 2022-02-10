/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:01 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/10 09:40:34 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{

	public:
		Weapon();
		~Weapon();
		
		std::string &getType() const;
		void		setType(std::string new_weapon);

	private:
		std::string	_weapon;
};

#endif