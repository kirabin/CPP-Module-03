#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

// clang++ -Wall -Wextra -Werror NinjaTrap.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp
int main()
{
	ClapTrap	clapTrap("Clappy");
	FragTrap	fragTrap("Frogy");
	ScavTrap	scavTrap("Scavoir");
	NinjaTrap	ninjaTrap("Ninger");

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

	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.takeDamage(94);
	scavTrap.takeDamage(23);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(23);

	ninjaTrap.ninjaShoebox(scavTrap);
	ninjaTrap.ninjaShoebox(clapTrap);
	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);
	ninjaTrap.takeDamage(94);
	ninjaTrap.takeDamage(23);
	ninjaTrap.beRepaired(10);
	ninjaTrap.takeDamage(23);

	return 0;
}
