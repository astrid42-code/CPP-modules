#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

#include "Brain.hpp"

class Animal{

	public:
	
		Animal();
		Animal(std::string type);
		Animal(Animal const & animal_copy);
		virtual ~Animal();  // virtual pour detruire correctement sans leaks

		virtual Animal & operator=(Animal const & animal_op); // pour vérifier quel type d'animal

		std::string		getType() const;
		virtual void	makeSound() const = 0; // pour que le bruit soit propre a l animal (et pas celui du chat ou du chien)
		// a l'exec il va choisir le type en fct de ce qu'on envoie
		virtual std::string		getIdeas(int i) const = 0;
		virtual void			setIdeas(int i, std::string idea) = 0;

	protected:
		std::string _type;

};

#endif