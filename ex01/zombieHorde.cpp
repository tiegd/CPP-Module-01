/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:59:25 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/13 16:03:15 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	try
	{
		Zombie*	horde = new Zombie[N];
		for (int i = 0; i < N; i++)
			horde[i].setName(name);
		return (horde);
	}
	catch(std::bad_alloc & ba)
	{
		return (NULL);
	}
}
