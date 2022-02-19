#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap{
	

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & claptrap_copy);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & claptrap_op);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	private:

		
	protected: // private donnant acces aux objets des classes enfants

		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & claptrap_op);

#endif