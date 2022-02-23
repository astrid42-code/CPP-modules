#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

// virtual : permet un comportement dynamique (et non plus statique)
// ma classe herite d une autre classe mais il va utiliser le type reel 
// pas celui de la classe parente

// ex : si j appelle Animal *Cat > cat va utiliser les donnees de Animal
// si je mets virtual le compilo va chercher quel type d animal c est 

class Dog : public Animal
{

	public:
		Dog();
		Dog(std::string const &type);
		Dog(Dog const & dog_copy);
		~Dog();

		Dog & operator=(Dog const & dog_op);

		void			setType(std::string sound);
		std::string		getType() const;
		virtual void	makeSound() const; // pour la methode qu on veut specifier comme celle a utiliser 

	private:
	std::string	_sound;

	protected:

};

#endif