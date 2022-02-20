#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal{

	public:
	
	//WrongAnimal();
		WrongAnimal(std::string const &type = std::string("default wrong animal"));
		WrongAnimal(WrongAnimal const & wronganimal_copy);
		~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & wronganimal_op);

		void		setType();
		std::string	getType();
		void		makeSound();

	private:

	protected:
		std::string type;

};

#endif