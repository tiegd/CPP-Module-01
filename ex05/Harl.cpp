/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:37:44 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/04 14:59:02 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

void Harl::complain(std::string level)
{
	void	(Harl::*f[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string str[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	for (int i = 0; i < 4; i++)
	{
		if (level == str[i])
			(this->*f[i])();
	}
}

void Harl::debug(void)
{
	std::cout << "Debug message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning message" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error message" << std::endl;
}

Harl::~Harl()
{
}
