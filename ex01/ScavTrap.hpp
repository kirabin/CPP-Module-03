#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include "FragTrap.hpp"

// TODO: public protected private inheritance
class ScavTrap : public FragTrap {

	public:
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		ScavTrap&	operator =(const ScavTrap& other);

	private:

};

#endif
