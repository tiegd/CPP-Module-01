/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:10 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/02 17:46:47 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__
#define __HUMANB__

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		weapon;
	public:
		HumanB(std::string str);
		void	setWeapon(Weapon obj);
		void	attack();
		~HumanB();
};

#endif
