/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:01 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/12 23:01:24 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{

	public:
		Weapon(void);
		Weapon(std::string weapon);
		~Weapon(void);
		
		// set et get la réf de la weapon
		// réf (&new_weapon) si on veut l'utiliser dans différentes classes?
		std::string	getType() const;
		void		setType(std::string new_weapon);

	private:
		std::string	_weapon;
};

#endif