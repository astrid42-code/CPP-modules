/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:39 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/10 11:00:04 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA();
		HumanA(std::string name, std::string weapon);
		~HumanA();

		void	attack() const;

	private:
		std::string	_weaponA;
		std::string	_nameA;
};



#endif