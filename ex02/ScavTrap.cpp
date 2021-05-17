#include "ScavTrap.hpp"

std::string ScavTrap::_challenges[5] = {
	"Let's see that're you made of!",
	"Get ready!",
	"Make the way, I'll teach him!",
	"Wanna fight?!?",
	"Wait a sec. let me try something."
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_model = "SC4V-TP";
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armor = 3;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other._name) {
	this->_model = "SC4V-TP";
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

ScavTrap::~ScavTrap() {}

ScavTrap&	ScavTrap::operator =(const ScavTrap& other) {
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

void		ScavTrap::challengeNewcomer() const {
	std::cout << this->_challenges[rand() % 5] << std::endl;
}
