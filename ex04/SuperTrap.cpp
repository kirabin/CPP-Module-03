#include "SuperTrap.hpp"

// TODO: how to call claptrap constructor only once?
SuperTrap::SuperTrap(const std::string &name) : FragTrap(name), NinjaTrap(name) {
	// this->_hitPoints = this->FragTrap::_hitPoints;
}

SuperTrap::SuperTrap(const SuperTrap& other) : FragTrap(name), NinjaTrap(name){
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

SuperTrap::~SuperTrap() {}

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
}
