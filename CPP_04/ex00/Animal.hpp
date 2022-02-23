#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{

	public:
	
		Animal();
		//const Animal(std::string const &type = std::string("default type")); // initialise le type avec une valeur donnee ou un default
		Animal(Animal const & animal_copy);
		virtual ~Animal();  // virtual pour detruire correctement sans leaks

		Animal & operator=(Animal const & animal_op);

		void			setType(std::string type);
		std::string		getType() const;
		virtual void	makeSound() const; // pour que le bruit soit propre a l animal (et pas celui du chat ou du chien)

	private:

	protected:
		std::string _type;

};

#endif