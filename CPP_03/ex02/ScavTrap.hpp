#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

// herite des comportements de ClapTrap ET a en plus ses propres comportements
// (ici le guardGate)
// si je veux que l'attack soit differente de celle de Claprap je dois la reecrire
// sinon inutile

// l'heritage peut etre public, protected ou private (voir la notion de virtual?)
// il peut aussi y avoir des heritages multiples
// (mais attention aux conflits > voir notion d'heritage en diamant)

class	ScavTrap : public ClapTrap // = le scavtrap herite du claptrap
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

		std::string	get_name(void) const;
		int			get_energy(void) const;
		int			get_hit(void) const;
		int			get_damage(void) const;

	private:

};

std::ostream & operator<<(std::ostream & o, ScavTrap const & claptrap_op);

#endif