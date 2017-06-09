/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:17:01 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/09 21:09:56 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

//std::string ZombieEvent::type = "standart";

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
