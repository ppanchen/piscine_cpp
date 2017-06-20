/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:10:34 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/14 15:24:59 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(const HumanB & hm)
{
	*this = hm;
}

HumanB::~HumanB()
{
	return ;
}

HumanB & HumanB::operator=(HumanB const & hm)
{
	if (this != &hm)
	{
		this->name = hm.name;
		this->wp = hm.wp;
	}
	return (*this);
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << wp->getType() << std::endl;
}

Weapon * HumanB::getWeapon() const
{
	return (wp);
}

void	HumanB::setWeapon(Weapon & wp)
{
	this->wp = &wp;
}
