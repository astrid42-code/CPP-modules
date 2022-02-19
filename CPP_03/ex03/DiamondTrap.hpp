#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap // virtual?
{
	

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & diamondtrap_copy);
		~DiamondTrap(void);

		DiamondTrap & operator=(DiamondTrap const & diamondtrap_op);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys(void);
	
	private:
	//	std::string	_name;

};
// verifier qui on appelle (claptrap ou autre)
std::ostream & operator<<(std::ostream & o, DiamondTrap const & claptrap_op);

#endif