#include "FragTrap.hpp"

string FragTrap::messages[5] = {
	"I'm murloc, I'm death! ",
	"Lerooooooy Jeeeenkins! ",
	"Aaaaaargh! ",
	"I'll feast on your OIL! ",
	"Pew-pew. "
};

FragTrap::FragTrap(string name) : ClapTrap(name) {
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

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other._name) {
	*this = other;
}

FragTrap::~FragTrap() {
	
}

FragTrap&	FragTrap::operator =(const FragTrap& other) {
	this->_name = other._name;
	return *this;
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
