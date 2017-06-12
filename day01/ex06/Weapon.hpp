/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 16:37:43 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/12 17:45:28 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Weapon
{
	std::string type;
public:
	Weapon();
	Weapon(std::string);
	Weapon(const Weapon &);
	Weapon & operator=(const Weapon &);
	~Weapon();
	const std::string & getType() const;
	void setType(std::string);
};
