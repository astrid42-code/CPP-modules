#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <ostream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy_shrub);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &shrub_op);

	private:
		std::string	_target;
};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm & shrub_op);

#endif