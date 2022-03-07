#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;


class Intern : public Form{

	public:
		Intern();
		Intern(const Intern &copy_intern);
		~Intern();

		Intern & operator=(const Intern &intern_op);

		std::string	getName();
		Form	*makeForm(std::string _name, std::string _target);
		Form	*robotomy(void);
		Form	*presidential(void);
		Form	*shrubbery(void);

		class FailureException : public std::exception{
			public:
				virtual const char * what() const throw();
		};

	private:
		std::string	_target;
		std::string	_name;
};

#endif