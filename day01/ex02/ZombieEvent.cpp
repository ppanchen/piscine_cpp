/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:17:01 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/10 19:04:54 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

std::string ZombieEvent::type = "standart";

void ZombieEvent::setZombieType(std::string t)
{
	type = t;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zmb;

	zmb = new Zombie(name, type);
	return (zmb);
}

Zombie* ZombieEvent::randomChump()
{
	std::string names[5] = {"Rick", "Luise", "Gin", "Ben", "Morty"};
	int			i;
	Zombie		*zmb;

	srand(time(0));
	i = rand() % 5;
	zmb = new Zombie(names[i], type);
	zmb->announce();
	return (zmb);
}

Zombie *ZombieEvent::ZombieHorde(int n)
{
	Zombie	*zmb;
	Zombie	tmp("Nick");
	Zombie	tmp1(tmp);
	Zombie 	tmp2;
	int		i;

	tmp2 = tmp1;
	i = -1;
	zmb = new Zombie[5];
	zmb[2].announce();
//	while (++i < n)
//	{
//		zmb[i] = tmp;
//	}
	return (zmb);
}
