#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{

	public:
		// Cat();
		Cat(std::string const &type = std::string("default cat"));
		Cat(Cat const & cat_copy);
		~Cat();

		Cat & operator=(Cat const & cat_op);

		void		setType();
		std::string	getType();
		void		makeSound();

	private:

	protected:

};

#endif