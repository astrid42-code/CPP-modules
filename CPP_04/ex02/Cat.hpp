#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include <string>

# include "AAnimal.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const & cat_copy);
		~Cat();

		Cat & operator=(Cat const & cat_op);
		virtual AAnimal & operator=(AAnimal const & animal_op);

		virtual void	makeSound() const;
//		Brain	*get_Ideas() const; // récupérer les idées instanciées dans la classe Brain
		// * car tableau d'idées avec pointeur

	private:
	
};

#endif