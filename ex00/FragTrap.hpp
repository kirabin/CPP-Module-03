#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

using std::string;
using std::cout;
using std::endl;

class FragTrap {

	public:
		FragTrap(string name);
		FragTrap(const FragTrap& other);
		~FragTrap();

		FragTrap&	operator =(const FragTrap& other);
		void		rangedAttack(const string& target) const;
		void		meleeAttack(const string& target) const;
		void		vaulthunter_dot_exe(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		int		_hitPoints;
		int		_maxHitPoints;
		int		_energyPoints;
		int		_maxEnergyPoints;
		int		_level;
		string	_name;
		int		_meleeDamage;
		int		_rangedDamage;
		int		_armor;
		static string messages[5];
};

#endif
