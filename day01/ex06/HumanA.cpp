/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:10:34 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/14 15:24:57 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & w): name(name), wp(w)
{
	return ;
}

HumanA::HumanA(const HumanA & hm) : wp(hm.wp)
{
	*this = hm;
}

HumanA::~HumanA()
{
	return ;
}

HumanA & HumanA::operator=(HumanA const  & hm)
{
	if (this != &hm)
	{
		this->name = hm.name;
		this->wp = hm.wp;
	}
	return (*this);
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << wp.getType() << std::endl;
}
