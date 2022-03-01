#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <typeinfo>       // operator typeid
#include <exception>      // std::exception

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat &copy_b);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & bur_op);

		std::string	getName() const;
		int			getGrade() const;
		int			gradeUp();
		int			gradeDown();
	
	//classes imbriquées:
	class GradeTooHighException{

	}

	class GradeTooLowException{

	}

	private:
		const std::string	_name;
		int					_grade;

}

std::ostream & operator<<(std::ostream & o, Bureaucrat & bur_op);

#endif