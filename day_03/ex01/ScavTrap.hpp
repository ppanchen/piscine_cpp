//
// Created by Petro Panchenko on 6/16/17.
//

#ifndef DAY_03_SCAVTRAP_HPP
#define DAY_03_SCAVTRAP_HPP
#include <iostream>
#include <random>

class ScavTrap{
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	int meleeDamage;
	int rangedDamage;
	int armorDamageReduction;
public:
	ScavTrap(std::string const &name = "Kevin");
	~ScavTrap();
	ScavTrap(ScavTrap const &);
	ScavTrap &operator=(ScavTrap const &);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
	friend std::ostream &operator<<(std::ostream &os, const ScavTrap &trap);
};

#endif //DAY_03_SCAVTRAP_HPP
