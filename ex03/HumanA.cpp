/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:57:50 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/17 10:39:34 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &w): weapon(w)
{
	this->name = name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
