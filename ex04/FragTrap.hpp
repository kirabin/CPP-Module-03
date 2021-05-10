#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class FragTrap : public ClapTrap{

	public:
		FragTrap(string name);
		FragTrap(const FragTrap& other);
		~FragTrap();

		FragTrap&	operator =(const FragTrap& other);
		void		vaulthunter_dot_exe(std::string const & target);

	private:
		static string messages[5];
};

#endif
