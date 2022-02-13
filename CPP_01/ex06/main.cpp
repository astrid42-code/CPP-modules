/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:38:00 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/13 18:47:33 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	complain(std::string complaint_level){
	Karen	karen(complaint_level);

	
}
int main(int ac, char **av){
	
    if (ac != 2){
        std::cout << "There is an error in arguments" << std::endl;
		return (1);
    }
	complain(av[1]);
	return (0);
}