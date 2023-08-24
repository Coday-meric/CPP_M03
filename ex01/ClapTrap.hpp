//
// Created by aymeric on 17/08/23.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	int _hit;
	int _energyptn;
	int _damage;
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);
};


#endif //CLAPTRAP_HPP
