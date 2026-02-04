/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:57:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/02 17:24:49 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
#define __ZOMBIE__
#include <string>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string str);
		void	setName(std::string str);
		void	announce();
		~Zombie();
};

Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
