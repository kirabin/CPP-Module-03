#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ClapTrap {

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();

		ClapTrap&	operator =(const ClapTrap& other);
		void		rangedAttack(const std::string& target) const;
		void		meleeAttack(const std::string& target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		int				_level;
		std::string		_name;
		std::string		_model;
		int				_meleeDamage;
		int				_rangedDamage;
		int				_armor;
};

#endif
