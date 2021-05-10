#include "ScavTrap.hpp"

string ScavTrap::challenges[5] = {
	"Let's see that're you made of!",
	"Get ready!",
	"Aaaaaargh!",
	"You wanna fight?!",
	"Wait a sec. let me try something."
};

// TODO: how does this consturctor work?
ScavTrap::ScavTrap(string name) : ClapTrap(name) {
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
	*this = other;
}

ScavTrap::~ScavTrap() {

}

ScavTrap&	ScavTrap::operator =(const ScavTrap& other) {
	// TODO: why make copy instead of reference?
	this->_name = other._name;
	return *this;
}

void		ScavTrap::challengeNewcomer() const {
	cout << this->challenges[rand() % 5] << endl;
}
