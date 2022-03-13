/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:55:33 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/13 15:14:04 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(){

	std::cout << "Test 1 : int" << std::endl;
	int tab_int[] = {2, 5, 7};

	::iter(tab_int, 3, writeTab);

	std::cout << std::endl;

	std::cout << "Test 2 : char" << std::endl;
	char tab_char[] = {42, 'y', 'o', 'u'};

	::iter(tab_char, 4, writeTab);

	std::cout << std::endl;

	std::cout << "Test 3 : string" << std::endl;
	std::string tab_str[] = {"hello world", ":", "I", "love", "42", ""};

	::iter(tab_str, 6, writeTab);
	
	std::cout << std::endl;

	std::cout << "Test 4 : float" << std::endl;
	float tab_f[] = {42.369f, 8.4f};

	::iter(tab_f, 2, writeTab);
	
	std::cout << std::endl;
	
	return (0);
}