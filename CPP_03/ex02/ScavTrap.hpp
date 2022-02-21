#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & scavtrap_copy);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & scavtrap_op);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate(void);

	private:

};

std::ostream & operator<<(std::ostream & o, ScavTrap const & scavtrap_op);

#endif