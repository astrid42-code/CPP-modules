#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & cat_copy);
		~Cat();

		Cat & operator=(Cat const & cat_op);
		virtual Animal & operator=(Animal const & animal_op);

		void		makeSound() const;
		std::string	getIdeas(int i) const; // récupérer les idées instanciées dans la classe Brain
		// * car tableau d'idées avec pointeur
		void	setIdeas(int i, std::string idea);

	private:
		Brain	*_brain_cat;
};

#endif