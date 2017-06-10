/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:38:13 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/10 17:04:12 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void func()
{
	Zombie *zmb;

	ZombieEvent::setZombieType("advanced");
	zmb = ZombieEvent::newZombie("Nick");
	zmb->announce();
	delete zmb;
	ZombieEvent::setZombieType("pro");
	zmb = ZombieEvent::randomChump();
	delete zmb;
	Zombie *zmbs = ZombieEvent::ZombieHorde(5);
	zmbs[2].announce();
	delete []zmbs;
}

int main(int argc, char **argv)
{
	func();
	while (1);
	return (0);
}
