/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 18:21:28 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/10 18:26:23 by ppanchen         ###   ########.fr       */
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
		void identify();
};
