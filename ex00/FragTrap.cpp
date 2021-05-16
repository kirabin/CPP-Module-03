#include "FragTrap.hpp"

std::string FragTrap::_messages[5] = {
	"I'm murloc, I'm death! ",
	"Lerooooooy Jeeeenkins! ",
	"Aaaaaargh! ",
	"I'll feast on your OILS! ",
	"Pew-pew. "
};

FragTrap::FragTrap(std::string name) {
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

FragTrap::FragTrap(const FragTrap& other) {
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

FragTrap::~FragTrap() {}

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

void		FragTrap::rangedAttack(const std::string& target) const {
	std::cout << "FR4G-TP " <<  this->_name;
	std::cout << " attacks " << target << " at range, ";
	std::cout << "causing " << this->_rangedDamage << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(const std::string& target) const {
	std::cout << "FR4G-TP " <<  this->_name;
	std::cout << " attacks " << target << " at melee, ";
	std::cout << "causing " << this->_meleeDamage << " points of damage!" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(const std::string& target){
	unsigned int	cost = 25;
	int	choice = rand() % 2;

	if (this->_energyPoints >= cost) {
		this->_energyPoints -= cost;
		std::cout << this->_messages[rand() % 5];
		if (choice)
			meleeAttack(target);
		else
			rangedAttack(target);
	}
	else {
		std::cout << "Energy is low: " << this->_energyPoints << "/" << cost << std::endl;
	}
}

void		FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FR4G-TP " <<  this->_name;
	if ((unsigned int)this->_armor >= amount) {
		std::cout << " Couldn't pierce through armor";
	}
	else if (amount - this->_armor > this->_hitPoints) {
		std::cout << " got " << this->_hitPoints << " damage.";
		this->_hitPoints = 0;
	}
	else {
		std::cout << " got " << amount - this->_armor << " damage.";
		this->_hitPoints -= amount - this->_armor;
	}
	std::cout << std::endl << "\tHealth: " << this->_hitPoints << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP " <<  this->_name;
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
