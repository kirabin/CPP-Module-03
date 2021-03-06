#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_model = "NINJ4-TP";
	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armor = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other) : ClapTrap(other._name) {
	this->_model = "NINJ4-TP";
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

NinjaTrap::~NinjaTrap() {}

NinjaTrap&	NinjaTrap::operator =(const NinjaTrap& other) {
	this->_model = "NINJ4-TP";
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

void		NinjaTrap::ninjaShoebox(ClapTrap& other) {
	std::cout << "Attacking " << other.getName() << " with shoebox! Can't clap without roboarms!" << std::endl;
	other.takeDamage(this->_meleeDamage);
}

void		NinjaTrap::ninjaShoebox(FragTrap& other) {
	std::cout << "Attacking " << other.getName() << " with shoebox! Throws it far away!" << std::endl;
	other.takeDamage(this->_meleeDamage);
}

void		NinjaTrap::ninjaShoebox(ScavTrap& other) {
	std::cout << "Attacking " << other.getName() << " with shoebox! Scavenger got scavenged!" << std::endl;
	other.takeDamage(this->_meleeDamage);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap& other) {
	std::cout << "Attacking " << other.getName() << " with shoebox! Not so sneaky as we thought!" << std::endl;
	other.takeDamage(this->_meleeDamage);
}
