#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal{

	public:
	
		virtual ~AAnimal();  // virtual pour detruire correctement sans leaks

		virtual AAnimal & operator=(AAnimal const & animal_op) = 0; // pour vérifier quel type d'animal

		const std::string		&getType() const;
		virtual void	makeSound() const = 0; // la classe ne pourra pas s'instancier
		// = classe abstraite, l'animal ne pourra pas faire de son par lui-même
		
	protected:
		std::string _type;

};

#endif