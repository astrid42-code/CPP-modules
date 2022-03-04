#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(const Form &copy_form);
		virtual ~Form();

		Form & operator=(const Form &form_op);

		std::string	getName() const;
		bool		getSign() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		virtual void	beSigned(Bureaucrat &bureaucrat) = 0;
		virtual void	beExec(Bureaucrat &Bureaucrat) = 0;

		class GradeTooHighException : public std::exception{
			public:
			// doit renvoyer un msg d'erreur personnalisé mais comment?
			// "The grade is too high"
				virtual const char * what() const throw(){
					return ("the grade is too high");
				}
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("the grade is too low");
				}
		};

	private:
		const std::string _name;
		bool		_sign;
		const int	_grade_sign;
		const int	_grade_exec;
};

std::ostream & operator<<(std::ostream & o, Form & form_op);

#endif