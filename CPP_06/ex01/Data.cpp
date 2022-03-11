/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:02:07 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/11 16:16:59 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _data_int(0){
}

Data::Data(int data) : _data_int(data){
}
		
Data::Data(const Data &data_cp) : _data_int(data_cp._data_int){
}
		
Data::~Data(){
}

Data & Data::operator=(const Data &data_op){
	
}

int			Data::getData() const{
	return (_data_int);
}
		
uintptr_t 	Data::serialize(Data* ptr){
	return (_data_int);
}

Data* 		Data::deserialize(uintptr_t raw){
	return (this);
}