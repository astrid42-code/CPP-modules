/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:38:00 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/15 17:38:23 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av){
	Karen	karen;

    if (ac != 2){
        std::cout << "There is an error in arguments" << std::endl;
		return (1);
    }
	karen.complain(av[1]);
	return (0);
}