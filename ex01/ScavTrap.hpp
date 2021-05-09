#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

using std::string;
using std::cout;
using std::endl;

class ScavTrap {

	public:
		ScavTrap(string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		ScavTrap&	operator =(const ScavTrap& other);
		void		rangedAttack(const string& target) const;
		void		meleeAttack(const string& target) const;
		void		challengeNewcomer() const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		unsigned int		_hitPoints;
		unsigned int		_maxHitPoints;
		unsigned int		_energyPoints;
		unsigned int		_maxEnergyPoints;
		int		_level;
		string	_name;
		int		_meleeDamage;
		int		_rangedDamage;
		int		_armor;
		static string challenges[5];
};

#endif
