#include "FragTrap.hpp"

// clang++ -Wall -Wextra -Werror FragTrap.cpp main.cpp
int main()
{
	FragTrap	fragTrap("Frogy");

	srand(time(NULL));
	fragTrap.vaulthunter_dot_exe("Spider");
	fragTrap.vaulthunter_dot_exe("Linter");
	fragTrap.vaulthunter_dot_exe("Getter");
	fragTrap.vaulthunter_dot_exe("C++");
	fragTrap.vaulthunter_dot_exe("School 43");
	fragTrap.takeDamage(94);
	fragTrap.takeDamage(23);
	fragTrap.beRepaired(10);
	fragTrap.takeDamage(23);

	return 0;
}
