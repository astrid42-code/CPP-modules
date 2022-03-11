/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:02:07 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/11 17:49:53 by astridgault      ###   ########.fr       */
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
	_data_int = data_op._data_int;
	return (*this);
}

int			Data::getData() const{
	return (_data_int);
}
