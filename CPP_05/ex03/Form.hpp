#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"
# include "Intern.hpp"

class Intern;
class Bureaucrat;

class Form{

	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(const Form &copy_form);
		virtual ~Form();

		virtual Form & operator=(const Form &form_op);

		const std::string	& getName() const;
		bool		getSign() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		virtual void	beSigned(Bureaucrat &bureaucrat) = 0;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const throw();
		};

	private:
		std::string _name;
		bool		_sign;
		int			_grade_sign;
		int			_grade_exec;
};

std::ostream & operator<<(std::ostream & o, Form & form_op);

#endif