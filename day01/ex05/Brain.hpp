/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 18:21:28 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/11 20:10:20 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain
{
	int size;
	int weight;
	int productivity;
	public:
		Brain();
		~Brain();
		Brain(Brain const &);
		Brain & operator=(Brain const &);
		std::string identify();
		int getSize() const;
		void setSize(int);
		int getWeight() const;
		void setWeight(int);
		int getPr() const;
		void setPr(int);
};

std::ostream & operator<<(std::ostream &strm, const Brain &inst);
