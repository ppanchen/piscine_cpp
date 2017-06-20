/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:11:31 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/14 15:25:01 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	Weapon *wp;
	std::string name;
public:
	HumanB(std::string);
	HumanB(const HumanB &);
	~HumanB();
	HumanB & operator=(HumanB const &);
	Weapon * getWeapon() const;
	void setWeapon(Weapon &);
	void attack();
};
#endif
