#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));
	SuperTrap super("SuperMam");

	std::cout << std::endl;

	super.put_properties();
	super.beRepaired(10);

	std::cout << std::endl;

	return 0;
}
