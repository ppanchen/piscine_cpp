/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:07:44 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/11 21:02:54 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	br = new Brain();
	return ;
}

Human::~Human()
{
	delete br;
	std::cout << "Human was destroid" << std::endl;
}

Human::Human(Human const & hm)
{
	*this = hm;
}

Human & Human::operator=(Human const & hm)
{
	if (this != &hm)
	{		
		this->br = new Brain(*hm.br);
	}
	return (*this);
}

Brain & Human::getBrain() const
{
	return (*br);
}

void Human::setBrain(Brain *br)
{
	this->br = br;
}

std::string  Human::identify()
{
	return (br->identify());
}

std::ostream & operator<<(std::ostream &strm,  const Human &inst)
{
	return strm << "Human(" << *inst.br <<")";
}
