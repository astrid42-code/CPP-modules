/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:07:29 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/12 12:12:30 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av){
	Karen		karen;
	
	karen.complain("debug");
	karen.complain("prout"); // pas de fct : prévoir un message d'erreur?
	karen.complain("error");
	karen.complain("warning");
	karen.complain("info");
	return (0);
}