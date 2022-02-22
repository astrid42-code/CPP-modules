#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{

	public:
	
		Animal();
		//const Animal(std::string const &type = std::string("default type")); // initialise le type avec une valeur donnee ou un default
		Animal(Animal const & animal_copy) const;
		~Animal();

		Animal & operator=(Animal const & animal_op);

		void		setType();
		std::string	getType();
		void		makeSound();

	private:

	protected:
		std::string _type;

};

#endif