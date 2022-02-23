#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string const &type);
		Cat(Cat const & cat_copy);
		virtual ~Cat();

		Cat & operator=(Cat const & cat_op);

		void			setType(std::string sound);
		std::string		getType() const;
		virtual void	makeSound() const;

	private:
		std::string	_sound;

	protected:

};

#endif