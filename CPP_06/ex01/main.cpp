/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:02:16 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/11 16:20:40 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	return (<reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	
}

int main(){
	Data 		*data(42);
	uintptr_t	serialize;
	Data		*deserialize;
	
	
	serialize = data->serialize(data);
	deserialize = data->deserialize(serialize);

	std::cout << serialize << std::endl;
	std::cout << deserialize << std::endl;
	
	return (0);
}