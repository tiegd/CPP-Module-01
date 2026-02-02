/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:22 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/02 17:35:32 by gaducurt         ###   ########.fr       */
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

std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(const std::string &str)
{
	this->type = str;
}

Weapon::~Weapon()
{
}
