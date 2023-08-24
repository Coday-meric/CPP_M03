//
// Created by aymeric on 17/08/23.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
	std::string _name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	using ScavTrap::attack;
	void whoAmI();
};


#endif //DIAMONDTRAP_HPP
