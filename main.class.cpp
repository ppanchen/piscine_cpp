/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 19:08:22 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/08 20:36:42 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "main.class.hpp"
#include <string>


Animals::Animals()
{
	legs = 4;
	tail = 0;	
}

Animals::Animals(void *mem)
{
	return ;
}

Animals::~Animals()
{
	return ;
}

int Animals::Say()
{
	std::cout << "I'm an animal" << std::endl;
	return (strlen("I'm an animal"));
}

int Animals::GetLegs() const
{
	return (legs);
}

int Animals::SetLegs(int i)
{ 
	legs = i;
}
