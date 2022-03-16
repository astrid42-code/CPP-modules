/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:19:57 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/15 16:05:55 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 0
int main(int, char**)
{
	std::cout << "<<<<<<<<<< TEST int >>>>>>>>>>" << std::endl;
    try{
		Array<int> numbers(MAX_VAL);
    	int* mirror = new int[MAX_VAL];	
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
			std::cout << "i " << i << " number i : " << numbers[i] << std::endl;
			std::cout << "i " << i << " mirror i : " << mirror[i] << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Deep copy test" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << "Deep copy test ok" << std::endl;
		std::cout << std::endl;
		try
		{
			std::cout << "Test 1 index = -2" << std::endl;
			numbers[-2] = 0;
			std::cout << "Test 1 index = -2 (ok)" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Test 1 index = -2 (failure)" << std::endl;
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << "Test 2 index = maxval" << std::endl;
			numbers[MAX_VAL] = 0;
			std::cout << "Test 2 index = maxval (ok)" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Test 2 index = maxval (failure)" << std::endl;
			std::cerr << e.what() << std::endl;
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	
	std::cout << std::endl;
	std::cout << "<<<<<<<<<< TEST float >>>>>>>>>>" << std::endl;
	try{
		Array<float> f(MAX_VAL);
		float* f_mirror = new float[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const float value = rand();
			f[i] = value;
			f_mirror[i] = value;
			std::cout << std::fixed << std::setprecision(2) << "i " << i << " float i : " << f[i] << std::endl;
			std::cout << "i " << i << " f_mirror i : " << f_mirror[i] << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Deep copy test" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (f_mirror[i] != f[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << "Deep copy test ok" << std::endl;
		std::cout << std::endl;
		try
		{
			std::cout << "Test 1 index = 42" << std::endl;
			f[42] = 0;
			std::cout << "Test 1 index = 42 (ok)" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Test 1 index = 42 (failure)" << std::endl;
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << "Test 2 index = maxval-1 " << std::endl;
			f[MAX_VAL - 1] = 0;
			std::cout << "Test 2 index = maxval-1 ok" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Test 2 index = maxval-1 failure" << std::endl;
			std::cerr << e.what() << std::endl;
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			f[i] = rand();
		}
		delete [] f_mirror;
	}
	catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
