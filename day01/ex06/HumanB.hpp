/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:11:31 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/12 17:41:39 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	Weapon *wp;
	std::string name;
public:
	HumanB();
	HumanB(std::string, Weapon);
	HumanB(const HumanB &);
	~HumanB();
	HumanB & operator=(const HumanB &);
	void attack();
}
#endif
