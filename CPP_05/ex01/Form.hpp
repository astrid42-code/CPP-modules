#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>


class Form{

	public:
		Form();
		Form(const Form &copy_form);
		~Form();

		Form & operator=(const Form &form_op);

		class GradeTooHighException : public std::exception{
			public:
			// doit renvoyer un msg d'erreur personnalisé mais comment?
			// "The grade is too high"
				virtual const char * what() const throw(){
					return ("The grade is too high");
				}
		};

	
		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("The grade is too low");
				}
		};

	private:
		const std::string _name;
		bool	_sign;
		const int	_grade_sign;
		const int	_grade_exec;
};

std::ostream & operator<<(std::ostream & o, Form & form_op);

#endif