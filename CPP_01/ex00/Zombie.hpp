#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

// méthodes : fcts membres de la classe (ex announce)
// à différencier de fonction : fonction hors de la classe (ex randomChump)
class Zombie{
	public:

		Zombie(void);
		Zombie(std::string zombie_name);
		~Zombie(void);

		void 		announce( void );
		std::string	get_name(void) const;

	private:
	
		std::string	name;

};

Zombie	*newZombie( std::string name );
void		randomChump( std::string name );

#endif

// Zombie(std::string const &name = std::string("defaultName"));
// = constructeur par defaut avec parametre mais si pas de string name envoye
// il prendra comme nom default name