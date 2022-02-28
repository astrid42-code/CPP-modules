#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain{
	public:
		Brain();
		Brain(const Brain & brain_cpy);
		~Brain();

		Brain & operator=(const Brain & brain_op);

		void		set_Ideas(int i, std::string idea);
		std::string	get_Ideas(int i) const;


	private:
		std::string	_ideas[100];
};

#endif