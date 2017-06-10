/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 12:03:49 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/10 17:16:55 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:29:16 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/09 20:27:01 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "noname";
	type = "standart";
}

Zombie & Zombie::operator=(Zombie const &zmb)
{
	std::cout << "=" << std::endl;
	return (*this);
}

Zombie::Zombie(Zombie const &zmb)
{
	*this = zmb;
}

Zombie::Zombie(std::string n) 
{
	this->type = "standart";
	name = n;
}

Zombie::Zombie(std::string name, std::string type) 
{
	this->type = type;
	this->name = name;
}

Zombie::~Zombie()
{
	return ;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Brainsssss...." << std::endl;
}
