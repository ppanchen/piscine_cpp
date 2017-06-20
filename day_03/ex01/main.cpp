//
// Created by Petro Panchenko on 6/16/17.
//
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	FragTrap fr;
	ScavTrap st;

	fr.takeDamage(100);
	fr.vaulthunter_dot_exe("Kyi");
	fr.vaulthunter_dot_exe("Kyi");
	fr.vaulthunter_dot_exe("Kyi");
	fr.vaulthunter_dot_exe("Kyi");
	fr.vaulthunter_dot_exe("Kyi");
	std::cout << fr << std::endl;

	st.takeDamage(1000);
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	std::cout << st << std::endl;
}