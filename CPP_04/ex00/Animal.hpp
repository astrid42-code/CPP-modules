#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Cat.hpp"
// # include "Dog.hpp"

class Animal{

	public:
	
		Animal();
		Animal(Animal const & animal_copy);
		virtual ~Animal();  // virtual pour detruire correctement sans leaks

		Animal & operator=(Animal const & animal_op);

		void			setType(std::string type);
		std::string		getType() const;
		virtual void	makeSound() const; // pour que le bruit soit propre a l animal (et pas celui du chat ou du chien)

	private:
		Cat & _cat;
		// Dog & _dog;

	protected:
		std::string _type;

};

#endif