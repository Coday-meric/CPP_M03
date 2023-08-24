#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap b("lulu");

	b.attack("Pedri");
	b.takeDamage(10);
	b.();
}
