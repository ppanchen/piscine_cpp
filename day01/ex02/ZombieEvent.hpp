/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:19:54 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/10 15:54:38 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	static std::string type;
	public:
		ZombieEvent();
		~ZombieEvent();
		static void setZombieType(std::string);
		static Zombie* newZombie(std::string name);
		static Zombie* randomChump();
		static Zombie* ZombieHorde(int);
};
#endif
