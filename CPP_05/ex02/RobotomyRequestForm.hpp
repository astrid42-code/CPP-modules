#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & robot_copy);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm &form_op);

		std::string		getName() const;
		bool			getSign() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		virtual void	beSigned(Bureaucrat &bureaucrat);
		virtual void	beExec(Bureaucrat &Bureaucrat);

	private:
		std::string	_target;
};

#endif