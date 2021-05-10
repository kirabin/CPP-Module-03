#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) {
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
	*this = other;
}

ClapTrap::~ClapTrap() {

}

ClapTrap&	ClapTrap::operator =(const ClapTrap& other) {
	this->_name = other._name;
	return *this;
}

void		ClapTrap::rangedAttack(const string& target) const {
	cout << this->_model << " " <<  this->_name;
	cout << " attacks " << target << " at range, ";
	cout << "causing " << this->_rangedDamage << " points of damage!" << endl;
}

void		ClapTrap::meleeAttack(const string& target) const {
	cout << this->_model << " " <<  this->_name;
	cout << " attacks " << target << " at melee, ";
	cout << "causing " << this->_meleeDamage << " points of damage!" << endl;
}


void		ClapTrap::takeDamage(unsigned int amount) {
	cout << this->_model << " " <<  this->_name;
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

void		ClapTrap::beRepaired(unsigned int amount) {
	cout << this->_model << " " <<  this->_name;
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
