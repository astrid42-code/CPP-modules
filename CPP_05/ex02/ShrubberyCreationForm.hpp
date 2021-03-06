#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <ostream>
# include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy_shrub);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm 	& operator=(const ShrubberyCreationForm &shrub_op);

		const std::string	&	getTarget() const;
		void			beSigned(Bureaucrat &bureaucrat);
		void			execute(Bureaucrat const & executor) const;
		const char 		*openException() const throw();

	private:
		std::string	_target;
};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm & shrub_op);

#endif