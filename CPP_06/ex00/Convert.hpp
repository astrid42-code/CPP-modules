#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>
#include <iomanip>
#include <bits/stdc++.h>

class Convert{
	public:
		Convert();
		Convert(std::string arg);
		Convert(const Convert &conv_cp);
		~Convert();

		Convert	& operator=(const Convert &conv_op);

		void	checkType();
		bool	checkInt();
		void	printChar(char _char, int _flag);
		void	printInt(int _int, int _flag);
		void	printFloat(float _float);
		void	printDouble(double _double);
		void	print();

	private:
		std::string	_str;
		char	_char;
//		int		_type;
		int		_int;
		double	_double;
		float	_float;
		int		_flag;

};

#endif