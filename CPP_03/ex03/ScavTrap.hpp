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

class	ScavTrap : public virtual ClapTrap // virtual 
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

	protected:
	//	int			_scav_hp;
		int			_scav_ep;
	//	int			_scav_ad;

};

std::ostream & operator<<(std::ostream & o, ScavTrap const & claptrap_op);

#endif