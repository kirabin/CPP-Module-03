#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(string name) : ClapTrap(name) {
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
	*this = other;
}

NinjaTrap::~NinjaTrap() {

}

NinjaTrap&	NinjaTrap::operator =(const NinjaTrap& other) {
	// TODO: why make copy instead of reference?
	this->_name = other._name;
	return *this;
}


void		NinjaTrap::ninjaShoebox(ClapTrap& other) {
	cout << "Attacking " << other.getName() << " with shoebox! Destroying enemie's self esteem!" << endl;
	other.takeDamage(100);
}

void		NinjaTrap::ninjaShoebox(FragTrap& other) {
	cout << "Attacking " << other.getName() << " with shoebox! Destroying enemie's self esteem!" << endl;
	other.takeDamage(100);
}

void		NinjaTrap::ninjaShoebox(ScavTrap& other) {
	cout << "Attacking " << other.getName() << " with shoebox! Destroying enemie's self esteem!" << endl;
	other.takeDamage(100);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap& other) {
	cout << "Attacking " << other.getName() << " with shoebox! Destroying enemie's self esteem!" << endl;
	other.takeDamage(100);
}
