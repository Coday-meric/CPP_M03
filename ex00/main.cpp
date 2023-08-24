#include "ClapTrap.hpp"

int main() {
	ClapTrap a("gege");

	a.takeDamage(1);
	a.attack("Francis");
	a.beRepaired(1);
	a.takeDamage(11);
	a.attack("Dominique");
	return 0;
}
