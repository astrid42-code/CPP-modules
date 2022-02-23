#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & cat_copy);
		~Cat();

		Cat & operator=(Cat const & cat_op);

		void	makeSound() const;

};

#endif