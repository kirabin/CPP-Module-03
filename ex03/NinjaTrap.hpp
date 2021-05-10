#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// TODO: don't forget about reverse destructors
class NinjaTrap : public NinjaTrap {

	public:
		NinjaTrap(string name);
		NinjaTrap(const NinjaTrap& other);
		~NinjaTrap();

		NinjaTrap&	operator =(const NinjaTrap& other);
		void		ninjaShoebox(ClapTrap& other);
		void		ninjaShoebox(FragTrap& other);
		void		ninjaShoebox(ScavTrap& other);
		void		ninjaShoebox(NinjaTrap& other);

	private:

};


#endif
