#include "FragTrap.hpp"

std::string FragTrap::_messages[5] = {
	"I'm murloc, I'm death! ",
	"Lerooooooy Jeeeenkins! ",
	"Aaaaaargh! ",
	"I'll feast on your OIL! ",
	"Pew-pew. "
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_model = "FR4G-TP";
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeDamage = 30;
	this->_rangedDamage = 20;
	this->_armor = 5;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other._name) {
	this->_model = "FR4G-TP";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_level = other._level;
	this->_meleeDamage = other._meleeDamage;
	this->_rangedDamage = other._rangedDamage;
	this->_armor = other._armor;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&	FragTrap::operator =(const FragTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_level = other._level;
	this->_meleeDamage = other._meleeDamage;
	this->_rangedDamage = other._rangedDamage;
	this->_armor = other._armor;
	return *this;
}

void		FragTrap::vaulthunter_dot_exe(const std::string& target){
	unsigned int	cost = 25;
	int				choice = rand() % 2;

	if (this->_energyPoints >= cost) {
		this->_energyPoints -= cost;
		std::cout << this->_messages[rand() % 5];
		if (choice)
			this->meleeAttack(target);
		else
			this->rangedAttack(target);
	}
	else {
		std::cout << "Energy is low: " << this->_energyPoints << "/" << cost << std::endl;
	}
}
