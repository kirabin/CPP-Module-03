#include "SuperTrap.hpp"

// TODO: how to call claptrap constructor only once?
SuperTrap::SuperTrap(const string &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitPoints = this->FragTrap::_hitPoints;
	// this->_max
}

SuperTrap::SuperTrap(const SuperTrap& other) {
	*this = other;
}

SuperTrap::~SuperTrap() {

}

SuperTrap&	SuperTrap::operator =(const SuperTrap& other) {
	// this->value = other.value;
}
