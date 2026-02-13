/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:22 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/13 10:29:54 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon()
{
}

Weapon::Weapon(std::string str)
{
	setType(str);
}

const std::string	Weapon::getType()
{
	std::string	&ref = this->type;
	return (ref);
}

void	Weapon::setType(const std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}
