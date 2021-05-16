#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {

	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& other);
		~NinjaTrap();

		NinjaTrap&	operator =(const NinjaTrap& other);
		void		ninjaShoebox(ClapTrap& other);
		void		ninjaShoebox(FragTrap& other);
		void		ninjaShoebox(ScavTrap& other);
		void		ninjaShoebox(NinjaTrap& other);
};


#endif
