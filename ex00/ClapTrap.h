#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iomanip>
#include <iostream>

class ClapTrap {
public:
	ClapTrap();

    ClapTrap(const std::string name);

    ClapTrap(const ClapTrap& other);

    ClapTrap& operator=(const ClapTrap& other);

	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
private:
	std::string name;
	int 		hitPoints;
	int 		energyPoints;
	int			attackDamage;
};

#endif // CLAPTRAP_H
