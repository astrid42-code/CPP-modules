#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <ostream>
# include <typeinfo>
# include <exception>

# include "Form.hpp"

class Form;

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int i);
		Bureaucrat(const Bureaucrat &copy_b);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & bur_op);

		std::string	getName() const;
		int			getGrade() const;
		int			gradeUp();
		int			gradeDown();
		void		signForm(Form &form);
		void		executeForm(Form const & form);


	//classes imbriquées:
		class GradeTooHighException : public std::exception{
			public:
			// doit renvoyer un msg d'erreur personnalisé mais comment?
			// "The grade is too high"
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat & bur_op);

#endif