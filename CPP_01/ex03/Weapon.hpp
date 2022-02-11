/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:01 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/10 17:29:30 by astridgault      ###   ########.fr       */
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
		// réf car va être utilisée dans différentes classes?
		const std::string	&getType() const;
		void				setType(const std::string &new_weapon);

	private:
		std::string	_weapon;
};

#endif