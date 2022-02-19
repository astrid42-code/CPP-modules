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
	
	private:

};

std::ostream & operator<<(std::ostream & o, FragTrap const & claptrap_op);

#endif