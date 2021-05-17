#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	std::cout << "SuperTrap constructor called" << std::endl;
	this->_name = name;
	this->_model = "SUPER-TP";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxHitPoints = NinjaTrap::_maxHitPoints;
	this->_maxEnergyPoints = FragTrap::_maxEnergyPoints;
	this->_level = 1;
	this->_meleeDamage = NinjaTrap::_meleeDamage;
	this->_rangedDamage = FragTrap::_rangedDamage;
	this->_armor = FragTrap::_armor;
}

SuperTrap::SuperTrap(const SuperTrap& other) : ClapTrap(other._name), FragTrap(other._name), NinjaTrap(other._name) {
	this->_name = other._name;
	this->_model = "SUPER-TP";
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_level = other._level;
	this->_meleeDamage = other._meleeDamage;
	this->_rangedDamage = other._rangedDamage;
	this->_armor = other._armor;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor called" << std::endl;
}

SuperTrap&	SuperTrap::operator =(const SuperTrap& other) {
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

void	SuperTrap::put_properties() {
	std::cout << this->_name << std::endl;
	std::cout << this->_model << std::endl;
	std::cout << this->_hitPoints << std::endl;
	std::cout << this->_energyPoints << std::endl;
	std::cout << this->_maxHitPoints << std::endl;
	std::cout << this->_maxEnergyPoints << std::endl;
	std::cout << this->_level << std::endl;
	std::cout << this->_meleeDamage << std::endl;
	std::cout << this->_rangedDamage << std::endl;
	std::cout << this->_armor << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}
