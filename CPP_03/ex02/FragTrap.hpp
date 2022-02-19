#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap 
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & fragtrap_copy);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & fragtrap_op);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys(void);

		std::string	get_name(void) const;
		int			get_energy(void) const;
		int			get_hit(void) const;
		int			get_damage(void) const;
	
	private:
		//std::string	_name;

};

std::ostream & operator<<(std::ostream & o, FragTrap const & claptrap_op);

#endif