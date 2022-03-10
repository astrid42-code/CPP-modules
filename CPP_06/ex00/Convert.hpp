#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

class Convert{
	public:
		Convert();
		Convert(std::string arg);
		Convert(const Convert &conv_cp);
		~Convert();

		Convert	& operator=(const Convert &conv_op);

		void	checkType();
		void	printChar(char _char, int _flag);
		void	printInt(int _int, int _flag);
		void	printFloat(float _float, int _flag);
		void	printDouble(double _double, int _flag);
		void	print(int i);

	private:
		std::string	_str;
		char	_char;
		int		_type;
		int		_int;
		double	_double;
		float	_float;
		int		_flag;

};

#endif