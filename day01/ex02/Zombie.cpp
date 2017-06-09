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
