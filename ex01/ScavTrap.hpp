#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ScavTrap {

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		ScavTrap&	operator =(const ScavTrap& other);
		void		rangedAttack(const std::string& target) const;
		void		meleeAttack(const std::string& target) const;
		void		challengeNewcomer() const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		unsigned int		_hitPoints;
		unsigned int		_maxHitPoints;
		unsigned int		_energyPoints;
		unsigned int		_maxEnergyPoints;
		int					_level;
		std::string			_name;
		int					_meleeDamage;
		int					_rangedDamage;
		int					_armor;
		static std::string	_challenges[5];
};

#endif
