#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
		WrongCat();
		WrongCat(WrongCat & wrongcat);
		WrongCat(WrongCat const & wrongcat_copy);
		~WrongCat();

		WrongCat & operator=(WrongCat const & wrongcat_op);

		void		setType(std::string type);
		std::string	getType() const;
		void		makeSound() const;

	private:
	std::string	_sound;

	protected:

};

#endif