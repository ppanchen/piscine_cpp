//
// Created by Petro Panchenko on 6/16/17.
//

#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const &target){
	std::cout << "FR4G-TP " << name << " attacks " << target
					<< "at range, cousing " << rangedDamage
					<< " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target){
	std::cout << "FR4G-TP " << name << " attacks " << target
			  << "at melee, cousing " << rangedDamage
			  << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
	hitPoints = hitPoints - (int)amount <= 0 ? 0 : hitPoints - (int)amount;
}

void FragTrap::beRepaired(unsigned int amount){
	hitPoints = hitPoints + (int)amount >= maxHitPoints ?
				maxHitPoints : hitPoints + (int)amount;

}

FragTrap::FragTrap(std::string const &name) : name(name){
	srand((unsigned int)time(0));
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeDamage = 30;
	rangedDamage = 20;
	armorDamageReduction = 5;
	std::cout << "New FR4G-TP" << " \""
			  << this->name << "\" was constructed" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FR4G-TP" << " \"" << name << "\" was destructed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rft)
{
	*this = rft;
}

FragTrap &FragTrap::operator=(FragTrap const &rft)
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

void FragTrap::handAttack(std::string const &target){
	std::cout << "FR4G-TP " << name << " attacks " << target
			  << "by hand, cousing " << 5
			  << " points of damage !" << std::endl;
}

void FragTrap::headAttack(std::string const &target){
	std::cout << "FR4G-TP " << name << " attacks " << target
			  << "by head, cousing " << 10
			  << " points of damage !" << std::endl;
}

void FragTrap::legAttack(std::string const &target){
	std::cout << "FR4G-TP " << name << " attacks " << target
			  << "by leg, cousing " << 15
			  << " points of damage !" << std::endl;
}

void FragTrap::gunAttack(std::string const &target){
	std::cout << "FR4G-TP " << name << " attacks " << target
			  << "by M16, cousing " << 35
			  << " points of damage !" << std::endl;
}

void FragTrap::missplayAttack(std::string const &target){
	std::cout << "FR4G-TP " << name << " try to attacks " << target
			  <<" ,but he don't get in aim." << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target){
	void (FragTrap::*func[])(std::string const &) =
			{&FragTrap::handAttack, &FragTrap::headAttack, &FragTrap::legAttack,
			 &FragTrap::gunAttack, &FragTrap::missplayAttack};
	int i;

	if (this->energyPoints >= 25){
		i = rand() % 5;
		(this->*func[i])(target);
		energyPoints -= 25;
	} else
		std::cout << "You don`t have enough energy points." << std::endl;
}

std::ostream &operator<<(std::ostream &os, const FragTrap &trap){
	os << "hitPoints: " << trap.hitPoints << " maxHitPoints: " << trap.maxHitPoints << " energyPoints: "
	   << trap.energyPoints << " maxEnergyPoints: " << trap.maxEnergyPoints << " level: " << trap.level << " name: "
	   << trap.name << " meleeDamage: " << trap.meleeDamage << " rangedDamage: " << trap.rangedDamage
	   << " armorDamageReduction: " << trap.armorDamageReduction;
	return os;
}
