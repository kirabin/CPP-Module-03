#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

	public:
		SuperTrap(const std::string &name);
		SuperTrap(const SuperTrap& other);
		~SuperTrap();

		void		put_properties();
		SuperTrap&	operator =(const SuperTrap& other);

};

#endif
