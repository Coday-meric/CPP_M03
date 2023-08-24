//
// Created by aymeric on 17/08/23.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);

	void highFivesGuys(void);
};

#endif //FRAGTRAP_HPP
