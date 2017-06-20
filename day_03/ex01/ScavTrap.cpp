//
// Created by Petro Panchenko on 6/16/17.
//

#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const &target){
	std::cout << "ScavTrap " << name << " attacks " << target
					<< "at range, cousing " << rangedDamage
					<< " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target){
	std::cout << "ScavTrap " << name << " attacks " << target
			  << "at melee, cousing " << rangedDamage
			  << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
	hitPoints = hitPoints - (int)amount <= 0 ? 0 : hitPoints - (int)amount;
}

void ScavTrap::beRepaired(unsigned int amount){
	hitPoints = hitPoints + (int)amount >= maxHitPoints ?
				maxHitPoints : hitPoints + (int)amount;

}

ScavTrap::ScavTrap(std::string const &name) : name(name){
	srand((unsigned int)time(0));
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeDamage = 20;
	rangedDamage = 15;
	armorDamageReduction = 3;
	std::cout << "New ScavTrap" << " \""
			  << this->name << "\" was constructed" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap" << " \"" << name << "\" was destructed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rft)
{
	*this = rft;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rft)
{
	if (this != &rft)
	{
		this->hitPoints = rft.hitPoints;
		this->maxHitPoints = rft.maxHitPoints;
		this->energyPoints = rft.energyPoints;
		this->maxEnergyPoints = rft.maxEnergyPoints;
		this->level = rft.level;
		this->name = rft.name;
		this->meleeDamage = rft.meleeDamage;
		this->rangedDamage = rft.rangedDamage;
		this->armorDamageReduction = rft.armorDamageReduction;
	}
	return (*this);
}

void ScavTrap::challengeNewcomer(){
	std::string challenge[] = {"Jump", "Fork", "Sti"};
	int i;

	i = rand() % 3;
	std::cout << name << " make " << challenge[i] << std::endl;
}

std::ostream &operator<<(std::ostream &os, const ScavTrap &trap){
	os << "hitPoints: " << trap.hitPoints << " maxHitPoints: " << trap.maxHitPoints << " energyPoints: "
	   << trap.energyPoints << " maxEnergyPoints: " << trap.maxEnergyPoints << " level: " << trap.level << " name: "
	   << trap.name << " meleeDamage: " << trap.meleeDamage << " rangedDamage: " << trap.rangedDamage
	   << " armorDamageReduction: " << trap.armorDamageReduction;
	return os;
}
