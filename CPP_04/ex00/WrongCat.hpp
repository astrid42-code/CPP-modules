#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
		WrongCat(std::string const &type = std::string("default wrong cat"));
		WrongCat(WrongCat const & wrongcat_copy);
		~WrongCat();

		WrongCat & operator=(WrongCat const & wrongcat_op);

		void		setType();
		std::string	getType();
		void		makeSound();

	private:

	protected:

};

#endif