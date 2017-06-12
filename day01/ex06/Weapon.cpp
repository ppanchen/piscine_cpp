/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:36:07 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/12 17:45:15 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::~Weapon()
{
	return ;
}

Weapon::Weapon(const Weapon & wp)
{
	*this = wp;
}

Weapon & Weapon::operator=(const Weapon & wp)
{
	if (this != &wp)
	{
		this->type = wp.type;
	}
	return (*this);
}

const std::string & Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type  = type;
}
