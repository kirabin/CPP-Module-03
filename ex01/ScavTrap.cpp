#include "ScavTrap.hpp"

string ScavTrap::challenges[5] = {
	"Let's see that're you made of!",
	"Get ready!",
	"Aaaaaargh!",
	"You wanna fight?!",
	"Wait a sec. let me try something."
};

ScavTrap::ScavTrap(string name) {
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
	*this = other;
}

ScavTrap::~ScavTrap() {

}

ScavTrap&	ScavTrap::operator =(const ScavTrap& other) {
	this->_name = other._name;
	return *this;
}

void		ScavTrap::rangedAttack(const string& target) const {
	cout << "SC4V-TP " <<  this->_name;
	cout << " attacks " << target << " at range, ";
	cout << "causing " << this->_rangedDamage << " points of damage!" << endl;
}

void		ScavTrap::meleeAttack(const string& target) const {
	cout << "SC4V-TP " <<  this->_name;
	cout << " attacks " << target << " at melee, ";
	cout << "causing " << this->_meleeDamage << " points of damage!" << endl;
}

void		ScavTrap::challengeNewcomer() const {
	cout << this->challenges[rand() % 5] << endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {
	cout << "SC4V-TP " <<  this->_name;
	if (amount > this->_hitPoints) {
		cout << " got " << this->_hitPoints << " damage.";
		this->_hitPoints = 0;
	}
	else {
		cout << " got " << amount << " damage.";
		this->_hitPoints -= amount;
	}
	cout << endl << "\tHealth: " << this->_hitPoints << endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	cout << "SC4V-TP " <<  this->_name;
	cout << " repaired ";
	if (amount + this->_hitPoints > this->_maxHitPoints) {
		cout << this->_maxHitPoints - this->_hitPoints << " health.";
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		cout << amount << " health.";
		this->_hitPoints += amount;
	}
	cout << endl << "\tHealth: " << this->_hitPoints << endl;
}
