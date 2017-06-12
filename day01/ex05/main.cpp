/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:19:29 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/11 21:03:11 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void func()
{
	Human bob;
	Human *tmp;
	Brain *br;
	
	br = new Brain();
	br->setSize(10);
	bob.setBrain(br);
	tmp = new Human(bob);
	std::cout << *tmp << std::endl;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	std::cout << bob << std::endl;
	delete tmp;
//	delete br;
}

int main()
{
	func();
	while(1);
//	Brain *br;
//	Brain *cp;
//
//	br = new Brain();
//	cp = new Brain(*br);
//	cp->identify();
//	delete br;
}
