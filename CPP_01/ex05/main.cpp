/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:07:29 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/12 19:54:51 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av){
	Karen		karen;
	
	karen.complain("debug");
	karen.complain("warning");
	karen.complain("info");
	karen.complain("error");
	karen.complain("prout");
	karen.complain("");
	return (0);
}