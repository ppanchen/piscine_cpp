/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:11:31 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/14 15:24:54 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	Weapon & wp;
	std::string name;
public:
	HumanA(std::string, Weapon &);
	HumanA(const HumanA &);
	~HumanA();
	HumanA & operator=(HumanA const &);
	void attack();
};
#endif
