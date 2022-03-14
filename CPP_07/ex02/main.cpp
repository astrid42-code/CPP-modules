/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:19:57 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/14 13:38:32 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 42
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
		std::cout << "i " << i << "number i : " << numbers[i] << std::endl;
		std::cout << "i " << i << "mirror i : " << mirror[i] << std::endl;
    }
    //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "Deep copy test ok" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
		std::cout << "Test Maxval = -2 (failure)" << std::endl;
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "Test Maxval = 0 (failure)" << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
