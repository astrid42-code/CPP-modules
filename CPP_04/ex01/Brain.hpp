#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain{
	public:
		Brain();
		Brain(Brain const & brain_cpy);
		~Brain();

		Brain & operator=(Brain const & brain_op);

//		void		set_Ideas(std::string idea);
//		std::string	get_Ideas(void) const;


	private:
		std::string	_ideas[100];
};

#endif