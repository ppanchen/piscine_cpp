/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 17:52:46 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/08 20:36:14 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "main.class.hpp"
int main(int argc, char *argv[])
{
	std::cout << "qwerty" << std::endl;
	Animals *var = new Animals();
	Animals animal;
	std::cout << animal.GetLegs() << std::endl;
	return (0);

}
