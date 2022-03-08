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

		void	print();

	private:
		char	_char;
		int		_int;
		double	_double;
		float	_float;
		

};

#endif