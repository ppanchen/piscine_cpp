//
// Created by Petro Panchenko on 6/16/17.
//

#ifndef DAY_03_FRAGTRAP_HPP
#define DAY_03_FRAGTRAP_HPP
#include <iostream>
#include <random>

class FragTrap{
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
	FragTrap(std::string const &name = "Kevin");
	~FragTrap();
	FragTrap(FragTrap const &);
	FragTrap &operator=(FragTrap const &);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void handAttack(std::string const & target);
	void headAttack(std::string const & target);
	void legAttack(std::string const & target);
	void gunAttack(std::string const & target);
	void missplayAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &);
	friend std::ostream &operator<<(std::ostream &os, const FragTrap &trap);
};

#endif //DAY_03_FRAGTRAP_HPP
