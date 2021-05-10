#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

using std::string;
using std::cout;
using std::endl;

class ClapTrap {

	public:
		ClapTrap(string name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();

		ClapTrap&	operator =(const ClapTrap& other);
		void		rangedAttack(const string& target) const;
		void		meleeAttack(const string& target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		string		getName() const;

	protected:
		unsigned int		_hitPoints;
		unsigned int		_maxHitPoints;
		unsigned int		_energyPoints;
		unsigned int		_maxEnergyPoints;
		int		_level;
		string	_name;
		string	_model;
		int		_meleeDamage;
		int		_rangedDamage;
		int		_armor;
};

#endif
