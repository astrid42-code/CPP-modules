#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"

// virtual : permet un comportement dynamique (et non plus statique)
// ma classe herite d une autre classe mais il va utiliser le type reel 
// pas celui de la classe parente

// ex : si j appelle Animal *Cat > cat va utiliser les donnees de Animal
// si je mets virtual le compilo va chercher quel type d animal c est 

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(Dog const & dog_copy);
		~Dog();

		Dog & operator=(Dog const & dog_op);
		virtual AAnimal & operator=(AAnimal const & animal_op);

		virtual void	makeSound() const; // virtual : pour la methode qu on veut specifier comme celle a utiliser 

	private:

};

#endif