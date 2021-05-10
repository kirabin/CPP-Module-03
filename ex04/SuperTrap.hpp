#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

	public:
		SuperTrap(const string &name);
		SuperTrap(const SuperTrap& other);
		~SuperTrap();

		SuperTrap&	operator =(const SuperTrap& other);

};

#endif
