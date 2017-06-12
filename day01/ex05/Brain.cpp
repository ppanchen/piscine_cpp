/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 18:20:55 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/11 20:48:09 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <strstream>


Brain::Brain()
{
	size = 0;
	weight = 0;
	productivity = 0;
}

Brain::~Brain()
{
	std::cout << "Brain was destoid" << std::endl;
}

Brain::Brain(Brain const &br)
{
	*this = br;
}

Brain & Brain::operator=(Brain const &br)
{
	if (this != &br)
	{
		this->setSize(br.getSize());
		this->setWeight(br.getWeight());
		this->setPr(br.getPr());
	}
	return (*this);
}

std::string Brain::identify()
{
	std::strstream ss;
	std::string str;

	ss << this;
	str = ss.str();	
	return (str);
}

int Brain::getSize() const
{
	return (size);
}

void Brain::setSize(int s)
{
	size = s;
}

int Brain::getWeight() const
{
	return (weight);
}

void Brain::setWeight(int s)
{
	weight = s;
}

int Brain::getPr() const
{
	return (productivity);
}

void Brain::setPr(int s)
{
	productivity = s;
}

std::ostream & operator<<(std::ostream &strm, const Brain &inst)
{
	return strm << "Brain( size: " << inst.getSize() << ", weight: " <<\
		inst.getWeight() << ", pr: " << inst.getPr() << ")"; 

}
