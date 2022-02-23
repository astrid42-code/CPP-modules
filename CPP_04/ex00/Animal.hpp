#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{

	public:
	
		Animal();
		Animal(std::string type);
		Animal(Animal const & animal_copy);
		virtual ~Animal();  // virtual pour detruire correctement sans leaks

		Animal & operator=(Animal const & animal_op);

		std::string		getType() const;
		virtual void	makeSound() const; // pour que le bruit soit propre a l animal (et pas celui du chat ou du chien)

	protected:
		std::string _type;

};

#endif