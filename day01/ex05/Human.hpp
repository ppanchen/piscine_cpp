/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:19:23 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/11 20:20:59 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

class Human
{
	Brain *br;
	public:
		Human();
		virtual ~Human();
		Human(Human const &);
		Human & operator=(Human const &);
		Brain & getBrain() const;
		void setBrain(Brain *);
		std::string identify();
		friend std::ostream & operator<<(std::ostream &strm,  const Human &inst);
};
