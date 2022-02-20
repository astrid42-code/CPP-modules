#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{

	public:
		// Dog();
		Dog(std::string const &type = std::string("default dog"));
		Dog(Dog const & dog_copy);
		~Dog();

		Dog & operator=(Dog const & dog_op);

		void		setType();
		std::string	getType();
		void		makeSound();

	private:

	protected:

};

#endif