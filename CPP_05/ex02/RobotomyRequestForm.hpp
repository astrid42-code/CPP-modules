#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & robot_cp);
		virtual  ~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm &robot_op);

		std::string		getTarget() const;
		void			beSigned(Bureaucrat &bureaucrat);
		void			execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm & robot_op);

#endif