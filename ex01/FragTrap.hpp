#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class FragTrap {

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap();

		FragTrap&	operator =(const FragTrap& other);
		void		rangedAttack(const std::string& target) const;
		void		meleeAttack(const std::string& target) const;
		void		vaulthunter_dot_exe(std::string const & target);
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
		static std::string	_messages[5];
};

#endif
