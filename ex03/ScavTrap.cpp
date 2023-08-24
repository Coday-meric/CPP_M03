//
// Created by aymeric on 17/08/23.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_hit = 100;
	this->_energyptn = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " create with " << this->_hit << " hit point, " << this->_energyptn << " energy points and " << this->_damage << " attacks damage." << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " is definitely dead !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	*this = src;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	if (this != &rhs)
	{
		this->_hit = rhs._hit;
		this->_energyptn = rhs._energyptn;
		this->_damage = rhs._damage;
		this->_name = rhs._name;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_hit <= 0 || this->_energyptn <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no more hit points or energy point and is dying." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	--this->_energyptn;
	std::cout << "Energy points of " << this->_name << ": " << this->_energyptn << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " in mode gate keeper." << std::endl;
}