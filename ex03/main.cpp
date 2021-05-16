#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ClapTrap	clapTrap("Clappy");
	FragTrap	fragTrap("Frogy");
	ScavTrap	scavTrap("Scavoir");
	NinjaTrap	ninjaTrap("Ninger");

	srand(time(NULL));

	ninjaTrap.ninjaShoebox(scavTrap);
	ninjaTrap.ninjaShoebox(clapTrap);
	ninjaTrap.ninjaShoebox(fragTrap);
	std::cout << std::endl;
	ninjaTrap.ninjaShoebox(ninjaTrap);
	std::cout << std::endl;
	ninjaTrap.takeDamage(94);
	ninjaTrap.beRepaired(10);
	ninjaTrap.beRepaired(110);
	ninjaTrap.takeDamage(23);

	return 0;
}
