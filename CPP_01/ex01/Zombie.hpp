#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie{
	public:

		Zombie();
		~Zombie(void);

		void 		announce( void );
		std::string	get_name(void) const;
		std::string	set_name(std::string name);

	private:
	
		std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif