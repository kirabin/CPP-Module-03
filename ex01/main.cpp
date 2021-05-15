#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap	fragTrap("Frogy");
	ScavTrap	scavTrap("Scavoir");

	srand(time(NULL));
	fragTrap.vaulthunter_dot_exe("Spider");
	fragTrap.vaulthunter_dot_exe("Linter");
	fragTrap.vaulthunter_dot_exe("Getter");
	fragTrap.vaulthunter_dot_exe("C++");
	fragTrap.vaulthunter_dot_exe("School 43");
	std::cout << std::endl;
	fragTrap.takeDamage(94);
	fragTrap.takeDamage(23);
	fragTrap.beRepaired(10);
	fragTrap.beRepaired(110);
	fragTrap.takeDamage(23);
	std::cout << std::endl;
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	std::cout << std::endl;
	scavTrap.takeDamage(94);
	scavTrap.takeDamage(23);
	scavTrap.beRepaired(10);
	scavTrap.beRepaired(110);
	scavTrap.takeDamage(23);

	return 0;
}
