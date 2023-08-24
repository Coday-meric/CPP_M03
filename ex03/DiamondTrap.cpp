//
// Created by aymeric on 17/08/23.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap( name ), ScavTrap( name ) {
	this->_name = name;
	FragTrap::_hit = 100;
	ScavTrap::_energyptn = 50;
	FragTrap::_damage = 30;
	std::cout << "DiamondTrap " << this->_name << " create with " << this->_hit << " hit point, " << this->_energyptn << " energy points and " << this->_damage << " attacks damage." << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->_name << " is definitely dead !" << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}