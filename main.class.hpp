/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 19:02:07 by ppanchen          #+#    #+#             */
/*   Updated: 2017/06/08 20:35:01 by ppanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animals {
	public: 
		Animals();
		Animals(void *);
		~Animals();
		int Say();
		int GetLegs() const;
		int SetLegs(int);
	private:
		int legs;
		bool tail;
};
