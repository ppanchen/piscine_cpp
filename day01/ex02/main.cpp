/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:38:13 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/09 21:03:09 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(int argc, char **argv)
{
	Zombie *zmb;
	ZombieEvent::setZombieType("advanced");
	zmb = ZombieEvent::newZombie("Nick");
	zmb->announce();
	return (0);
}
