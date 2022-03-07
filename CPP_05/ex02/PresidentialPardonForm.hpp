#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"
class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & pres_copy);
		virtual  ~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm &pres_op);

		std::string		getTarget() const;
		void			beSigned(Bureaucrat &bureaucrat);
		void			execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm & pres_op);

#endif
