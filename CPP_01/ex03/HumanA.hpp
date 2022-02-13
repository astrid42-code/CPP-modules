/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:39 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 13:52:53 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(void);
		HumanA(std::string name, Weapon &weapon); // Weapon &weapon (car on veut récupérer la réf de l'objet weapon)
		~HumanA(void);

		void	attack(void) const;
		Weapon	&weaponA; // attribut qui récupère la réf &weapon dans le constructeur surchargé
		//(récupère réf de l'objet weaponA dont les méthodes et attributs sont affectés dans la classe Weapon)

	private:
		std::string	_name;
};
// club et WeaponA sont le meme objet (car weaponA est une ref de club)
// donc quand je modifie club ca modifie directement weaponA

#endif