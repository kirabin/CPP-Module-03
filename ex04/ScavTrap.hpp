#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		ScavTrap&	operator =(const ScavTrap& other);
		void		challengeNewcomer() const;

	private:
		static string challenges[5];
};

#endif
