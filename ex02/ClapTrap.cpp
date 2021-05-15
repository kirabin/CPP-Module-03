#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_model = "CL4P-TP";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeDamage = 30;
	this->_rangedDamage = 20;
	this->_armor = 5;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->_name = other._name;
}

ClapTrap::~ClapTrap() {}

ClapTrap&	ClapTrap::operator =(const ClapTrap& other) {
	this->_name = other._name;
	return *this;
}

void		ClapTrap::rangedAttack(const std::string& target) const {
	std::cout << this->_model << " " <<  this->_name;
	std::cout << " attacks " << target << " at range, ";
	std::cout << "causing " << this->_rangedDamage << " points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(const std::string& target) const {
	std::cout << this->_model << " " <<  this->_name;
	std::cout << " attacks " << target << " at melee, ";
	std::cout << "causing " << this->_meleeDamage << " points of damage!" << std::endl;
}


void		ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_model << " " <<  this->_name;
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

void		ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->_model << " " <<  this->_name;
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
