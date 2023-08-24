//
// Created by aymeric on 17/08/23.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _damage(0), _energyptn(10), _hit(10) {
	std::cout << "ClapTrap " << this->_name << " create with " << this->_hit << " hit point, " << this->_energyptn << " energy points and " << this->_damage << " attacks damage." << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->_name << " is definitely dead !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	if (this != &rhs)
	{
		this->_hit = rhs._hit;
		this->_energyptn = rhs._energyptn;
		this->_damage = rhs._damage;
		this->_name = rhs._name;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_hit <= 0 || this->_energyptn <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no more hit points or energy point and is dying." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	--this->_energyptn;
	std::cout << "Energy points of " << this->_name << ": " << this->_energyptn << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit <= 0 || this->_energyptn <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no more hit points or energy point and is dying." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " repair " << amount << " hit points !" << std::endl;
	--this->_energyptn;
	this->_hit += amount;
	std::cout << "New energy points of " << this->_name << ": " << this->_energyptn << std::endl;
	std::cout << "New hit points of " << this->_name << ": " << this->_hit << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " is attacked and loses " << amount << ", hit point !" << std::endl;
	this->_hit -= amount;
	std::cout << "New hit points of " << this->_name << ": " << this->_hit << std::endl;
}
