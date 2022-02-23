#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal{

	public:
	
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & wronganimal_copy);
		~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & wronganimal_op);

		std::string	getType() const;
		void		makeSound() const;

	protected:
		std::string _type;

};

#endif