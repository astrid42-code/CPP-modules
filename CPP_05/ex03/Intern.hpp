#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;
class Intern;

// creation d'une fct en static dans laquelle sera mis en place le ptr sur fct
typedef	Form *(Intern::*createForm)(const std::string &);
class Intern{

	public:
		Intern();
		Intern(const Intern &copy_intern);
		~Intern();

		Intern & operator=(const Intern &intern_op);

		Form	*makeForm(std::string _name, std::string _target);

		// class FailureException : public std::exception{
		// 	public:
		// 		virtual const char * what() const throw();
		// };

	private:
		Form	*robotomy(std::string const &target);
		Form	*presidential(std::string const &target);
		Form	*shrubbery(std::string const &target);
		static createForm ptrForm[3];
};

#endif