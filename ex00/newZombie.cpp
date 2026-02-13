/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:57:03 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/13 16:04:23 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	try
	{
		Zombie* zombie_2 = new Zombie(name);
		return (zombie_2);
	}
	catch(std::bad_alloc & ba)
	{
		return (NULL);
	}
}
