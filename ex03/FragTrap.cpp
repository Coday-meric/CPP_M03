//
// Created by aymeric on 17/08/23.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hit = 100;
	this->_energyptn = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " create with " << this->_hit << " hit point, " << this->_energyptn << " energy points and " << this->_damage << " attacks damage." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " is definitely dead !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	*this = src;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	if (this != &rhs)
	{
		this->_hit = rhs._hit;
		this->_energyptn = rhs._energyptn;
		this->_damage = rhs._damage;
		this->_name = rhs._name;
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "High fives guys ?" << std::endl;
}