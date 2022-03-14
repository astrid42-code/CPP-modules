/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:19:57 by asgaulti          #+#    #+#             */
/*   Updated: 2022/03/14 18:29:51 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 0 // plante avec taille 0

int main(int, char**)
{
	std::cout << "<<<<<<<<<< TEST int >>>>>>>>>>" << std::endl;
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
        numbers[0] = 0;
		std::cout << "Test 1 index = -2 (ok)" << std::endl;
    }
    catch(const std::exception& e)
    {
		std::cout << "Test 1 index = -2 (failure)" << std::endl;
        std::cerr << e.what() << '\n';
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
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	// std::cout << std::endl;
	// std::cout << "<<<<<<<<<< TEST char >>>>>>>>>>" << std::endl;
	// Array<char> str(MAX_VAL);
    // char* c_mirror = new char[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const char value = rand();
    //     str[i] = value;
    //     c_mirror[i] = value;
	// 	std::cout << "i " << i << " char i : " << str[i] << std::endl;
	// 	std::cout << "i " << i << " mirror i : " << c_mirror[i] << std::endl;
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (c_mirror[i] != str[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     str[i] = rand();
    // }
    // delete [] c_mirror;

	std::cout << std::endl;
	std::cout << "<<<<<<<<<< TEST float >>>>>>>>>>" << std::endl;
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
        std::cerr << e.what() << '\n';
    }
	// std::cout << std::endl;
    // try
    // {
	// 	std::cout << "Test 2 index = maxval-1 " << std::endl;
    //     f[MAX_VAL - 1] = 0;
	// 	std::cout << "Test 2 index = maxval-1 ok" << std::endl;
    // }
    // catch(const std::exception& e)
    // {
	// 	std::cout << "Test 2 index = maxval-1 failure" << std::endl;
    //     std::cerr << e.what() << '\n';
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        f[i] = rand();
    }
    delete [] f_mirror;
    return 0;
}
