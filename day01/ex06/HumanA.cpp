/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:10:34 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/12 17:41:57 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	wp = new Weapon();
}

HumanA::HumanA(std::string name, Weapon wp)
{
	this->name = name;
	wp = new Weapon(wp);
}

HumanA::HumanA(const HumanA & hm)
{
	*this = hm;
}

HumanA::~HumanA()
{
	delete wp;
}

HumanA & HumanA::operator=(const HumanA & hm)
{
	if (this != &hm)
	{
		this->name = hm.name;
		this->Weapon = new Weapon(hm.Weapon);
	}
	return (*this);
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << wp.getType() << std::endl;
}
