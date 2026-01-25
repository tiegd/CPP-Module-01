/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:57:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/25 17:11:37 by gaducurt         ###   ########.fr       */
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
		Zombie();
		Zombie(std::string str);
		void	announce();
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
