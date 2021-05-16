#include "ScavTrap.hpp"

std::string ScavTrap::_challenges[5] = {
	"Let's see that're you made of!",
	"Get ready!",
	"Aaaaaargh!",
	"You wanna fight?!",
	"Wait a sec. let me try something."
};

ScavTrap::ScavTrap(std::string name) {
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

ScavTrap::ScavTrap(const ScavTrap& other) {
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

void		ScavTrap::rangedAttack(const std::string& target) const {
	std::cout << "SC4V-TP " <<  this->_name;
	std::cout << " attacks " << target << " at range, ";
	std::cout << "causing " << this->_rangedDamage << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(const std::string& target) const {
	std::cout << "SC4V-TP " <<  this->_name;
	std::cout << " attacks " << target << " at melee, ";
	std::cout << "causing " << this->_meleeDamage << " points of damage!" << std::endl;
}

void		ScavTrap::challengeNewcomer() const {
	std::cout << this->_challenges[rand() % 5] << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "SC4V-TP " <<  this->_name;
	if (amount > this->_hitPoints) {
		std::cout << " got " << this->_hitPoints << " damage.";
		this->_hitPoints = 0;
	}
	else {
		std::cout << " got " << amount << " damage.";
		this->_hitPoints -= amount;
	}
	std::cout << std::endl << "\tHealth: " << this->_hitPoints << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SC4V-TP " <<  this->_name;
	std::cout << " repaired ";
	if (amount + this->_hitPoints > this->_maxHitPoints) {
		std::cout << this->_maxHitPoints - this->_hitPoints << " health.";
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << amount << " health.";
		this->_hitPoints += amount;
	}
	std::cout << std::endl << "\tHealth: " << this->_hitPoints << std::endl;
}
