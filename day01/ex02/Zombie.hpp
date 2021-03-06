/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:30:46 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/10 17:13:36 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		Zombie(Zombie const &);
		Zombie & operator=(Zombie const &);
		~Zombie();
		void announce(void);
	private:
		std::string name;
		std::string type;
};
#endif
