#include "FragTrap.hpp"

string FragTrap::messages[5] = {
	"I'm murloc, I'm death! ",
	"Lerooooooy Jeeeenkins! ",
	"Aaaaaargh! ",
	"I'll feast on your OIL! ",
	"Pew-pew. "
};

FragTrap::FragTrap(string name) {
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
	*this = other;
}

FragTrap::~FragTrap() {

}

FragTrap&	FragTrap::operator =(const FragTrap& other) {
	this->_name = other._name;
	return *this;
}

void		FragTrap::rangedAttack(const string& target) const {
	cout << "FR4G-TP " <<  this->_name;
	cout << " attacks " << target << " at range, ";
	cout << "causing " << this->_rangedDamage << " points of damage!" << endl;
}

void		FragTrap::meleeAttack(const string& target) const {
	cout << "FR4G-TP " <<  this->_name;
	cout << " attacks " << target << " at melee, ";
	cout << "causing " << this->_meleeDamage << " points of damage!" << endl;
}

void		FragTrap::vaulthunter_dot_exe(const string& target){
	unsigned int	cost = 25;
	int	choice = rand() % 2;

	if (this->_energyPoints >= cost) {
		this->_energyPoints -= cost;
		cout << this->messages[rand() % 5];
		if (choice)
			meleeAttack(target);
		else
			rangedAttack(target);
	}
	else {
		cout << "Energy is low: " << this->_energyPoints << "/" << cost << endl;
	}
}

// TODO: compile with -Wall -Wextra -Werror
void		FragTrap::takeDamage(unsigned int amount) {
	cout << "FR4G-TP " <<  this->_name;
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

void		FragTrap::beRepaired(unsigned int amount) {
	cout << "FR4G-TP " <<  this->_name;
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
