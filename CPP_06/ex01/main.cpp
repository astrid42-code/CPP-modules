/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:02:16 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/11 18:02:58 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// réinterpréter une adresse vers n'importe quelle autre adresse
// sans aucune vérification du compilateur
// peut être utile dans un cas de retypage (ex réception d'une donnée dans un réseau,
// on reçoit un flux d'octets qu'on stocke sous forme d'un void *, donc non typé
// le protocole va nous dire sous quelle forme il faut sortir les données, par ex des chars,
// on réinterprète alors sous la forme demandée)

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main(){
	Data 		*data = new Data(42);
	uintptr_t	serialize_uint;
	Data		*deserialize_ptr;
	
	
	serialize_uint = serialize(data);
	deserialize_ptr = deserialize(serialize_uint);

	std::cout << "data = " << data << std::endl;
	std::cout << "serialize = " << serialize_uint << std::endl;
	std::cout << "deserialize = " << deserialize_ptr << std::endl;
	
	delete data;
	
	return (0);
}