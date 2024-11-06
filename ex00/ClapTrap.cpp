#include "ClapTrap.h"
    
	ClapTrap::ClapTrap()
	{
		//Default Constructor
		std::cout << "Default constructor called" << std::endl;
		hitPoints = 10;
		energyPoints = 10;
		attackDamage = 10;
	}

	ClapTrap::ClapTrap(const std::string name)
	{
		//Constructor
		std::cout << "Name Constructor called for: " << name << std::endl;
	}

    ClapTrap::ClapTrap(const ClapTrap& other)
	{
		//Copy Constructor
		std::cout << "Copy Constructor called" << std::endl;
	}

    ClapTrap& ClapTrap::operator=(const ClapTrap& other)
	{
		//Copy Assignment Constructor
		std::cout << "Copy assignment Constructor" << std::endl;
	}

	ClapTrap::~ClapTrap(void)
	{
		//Dstructor
		std::cout << "Destructor called" << std::endl;
	}

	void	ClapTrap::attack(const std::string& target)
	{
		if (energyPoints > 0 && hitPoints > 0)
			std::cout << name << " attacks " << target << ", causing " << hitPoints << " points of damage." << std::endl;		
	}

	void	ClapTrap::takeDamage(unsigned int amount)
	{
		if (hitPoints > 0)
		{
			std::cout << name << " takes " << amount << " points of damage" << std::endl;
			hitPoints -= amount;
		}
	}

	void	ClapTrap::beRepaired(unsigned int amount)
	{
		if (hitPoints > 0 && energyPoints > 0)
			std::cout << name << " repairs itself for " << amount << " hit points" << std::endl;
	}


