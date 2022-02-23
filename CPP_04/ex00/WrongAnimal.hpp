#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal{

	public:
	
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const & wronganimal_copy);
		~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & wronganimal_op);

		void		setType(std::string type);
		std::string	getType() const;
		void		makeSound() const;

	private:

	protected:
		std::string _type;

};

#endif