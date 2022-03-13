/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:25:23 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/13 12:41:31 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

// exemple de fcts en template (à faire directement ici dans le .hpp)

int max(int x, int y){
	return (x >= y ? x : y);
}
// en mode template :
// pour que ça compile définir le type T:
template< typename T >
// T comme type (on peut l'appeler comme on veut) : mon type qu'on choisira après :
// T peut être un float, un int, ... mais aussi une instance de classe!
// d'où l'intérêt de prendre une référence car on n'aura pas besoin de recopier chaque élément de la classe, uniquement l'adresse
// + mettre T en const car pas de modification dans ce type de fct (tant dans les paramètres que dans le retour de la fct)

T const & max(T const &x, T const &y){ // T représente un type quelconque (qu'on donnera dans le main par ex)
// mais ce doit tjrs être le même (ex int x et int y)
	return (x >= y ? x : y);
}