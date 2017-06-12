/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:10:34 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/12 17:40:55 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	wp = new Weapon();
}

HumanB::HumanB(std::string name, Weapon wp)
{
	this->name = name;
	wp = new Weapon(wp);
}

HumanB::HumanB(const HumanB & hm)
{
	*this = hm;
}

HumanB::~HumanB()
{
	delete wp;
}

HumanB & HumanB::operator=(const HumanB & hm)
{
	if (this != &hm)
	{
		this->name = hm.name;
		this->Weapon = new Weapon(hm.Weapon);
	}
	return (*this);
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << wp.getType() << std::endl;
}
